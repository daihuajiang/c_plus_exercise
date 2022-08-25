#include<stdio.h>

int main(){
	//設計方式：
	//一、一年有365天（剛好是52個禮拜又一天）。西元1年1月1日為星期一，
	//西元2年1月1日星期二，須知道從西元1年到該年到底有多少次潤年。
	//二、依此方式就可以推算出每月的1號是星期幾。
	//三、逢四年一閏，百年不閏，逢四百年又一閏 
	
	int remainder; //求輸入年份1月1日為星期幾
    int year; //輸入年份
    int month; //輸入月份
    int day[12]={31,28,31,30,31,30,31,31,30,31,30,31}; //定義12月份各月份天數
    int dayrem; //輸入年份1月1日之餘數
    
    printf("請輸入年份： ");
    scanf("%d", &year);
    printf("請輸入月份： ");
    scanf("%d", &month);
    
    remainder=(year-1+(year-1)/4-(year-1)/100+(year-1)/400)%7;
	//己知西元1年1月1日為星期一
    //求出輸入年份第一個月之餘數必須計算閏年,若該年可
    //被100除盡,則該年不是閏年,但若該年可被400除盡,它也是閏年
    //求出輸入年份前一年12月31日星期幾
     
    if ((year%4 == 0 && year%100 != 0) || year%400 == 0){
	    if (month>=2) {
			//若該年是閏年則餘數+1,2月份也改為29天
			day[1]=29;
		}
	}
    
    for (int i=0;i<(month-1);i++) {
    	//求出輸入年份輸入月1日之總天數
		remainder+=day[i];
    }
    dayrem=(remainder+1)%7; //求出輸入月份1日為星期幾(因為從星期日計算故+1)
    
    printf("西元%d年%d月\n", year, month);
    printf(" 日  一  二  三  四  五  六");
    printf("\n");
    
    for (int i=0;i<dayrem;i++){
		printf("    ");
	}
	
	int count = dayrem%7; 
	for (int i=0;i<day[month-1];i++){
		//該月份1日從星期幾開始依序填入日期
		printf("%3d ", i+1);//3個字為一組,不足填入空格
		if (count>=6){
			//每週六後換行
			printf("\n");
			count=0;
		}
		else{count++; }
	}
	
	return 0;
} 
