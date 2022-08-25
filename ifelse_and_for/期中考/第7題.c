//輸入一個不大於 1000 的整數，對其做質因分解例如 60 = 2×2×3×5
#include<stdio.h>
#include<stdlib.h>
int main(){
	//宣告
	int n;
	//手動輸入
	scanf("%d",&n);
	int max=n;
	//計算輸入數字的質因數分解 
	while(1){
		//計算max最小的質數，並將max除以最小的質數
		for(int i=2;i<=n/2+1;i++){
			if(max%i==0){
				printf("%d ",i);
				max=max/i;
				break;
			}	
		}
		//如果max等於輸入數字表示輸入數字為質數 
		if(max==n){
			printf("%d",n);
			break;
		}
		//判斷max是否為質數 
		int j=0;
		for(int i=2;i<max/2+1;i++){
			if(max%i==0){
				j=0;
				break;
			}
			else{
				j=1;
			}
		} 
		//如果max是質數，表示max為輸入數字可分解出的最大的質數 
		if(j==1){
			printf("%d",max);
			max/=max;
			break;
		}
	}
	
	return 0;
}
