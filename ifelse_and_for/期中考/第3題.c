//梯形面積為上底加下，乘以 高除2。
//輸入依序為上底，下高，輸出它的面積
#include<stdio.h>
#include<stdlib.h>
int main(){
	//宣告
	float a,b,c;
	//手動輸入
	scanf("%f %f %f",&a,&b,&c);
	//輸出梯形面積 
	printf("%0.1f",(a+b)*c/2);
	return 0;
}
