#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main()
{
	//設定變數 
	int a,b=0,c,min=1,max=100;
	//隨機數 
	srand(time(0)); 
	a=1+rand()%100;
    printf("猜數字1~100\n");
    printf("請輸入一個數字: ");
	
	//while迴圈，判斷是否猜對數字
	do
	{ 
		scanf("%d",&c);
	    if(a==c) {
	    	printf("猜對了");
	    	b=1;
		}
		if(c>max || c<min) {
			printf("請輸入一個數字(%d~%d): ", min, max); 
		} 
		else{
			if(a<c) {
		    	max=c-1;
				printf("太大,請輸入一個數字(%d~%d): ", min, max); 
				c=c+1;
			}
			if(a>c) {
				min=c+1;
				printf("太小,請輸入一個數字(%d~%d): ", min, max);
				c=c+1;
			} 
		}
	    
    } while(b==0);
	return 0; 
}
