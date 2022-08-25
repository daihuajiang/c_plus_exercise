//請使用者輸入一個1~5之間的數字m
//接著製作一個4x4的二維陣列，每個元素的座標為(x,y)
//若x+y的值為m的倍數，則填入1，否則填入0
#include<stdio.h>
int main(){
	int m;
	scanf("%d",&m);
	int a[4][4];
	for(int i=0;i<4;i++){
		for(int j=0;j<4;j++){
			if((i+j)%m==0){
				a[i][j]=1;
			}
			else{
				a[i][j]=0;
			}
		}
	}
	
	for(int i=0;i<4;i++){
		for(int j=0;j<4;j++){
			printf("%d ",a[i][j]);
		}
		printf("\n");
	}
	return 0;
}
