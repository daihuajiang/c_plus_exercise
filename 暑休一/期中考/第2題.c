//請試寫一程式可讀取由使用者輸入分數並出相對應之成績等第 (
#include<stdio.h>
#include<stdlib.h>
int main(){
	//宣告
	int n;
	//手動輸入
	scanf("%d", &n);
	//判斷輸入分數屬於哪個等第並輸出 
	if(n>=80&&n<=100){
		printf("A");
	} 
	else if(n>=60&&n<80){
		printf("B");
	}
	else if(n>=40&&n<60){
		printf("C");
	}
	else if(n>=0&&n<40){
		printf("D");
	}
	return 0;
}
