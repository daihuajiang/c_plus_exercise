//輸入一個正整數 n，判斷 n是否為 質數。 input
#include<stdio.h>
#include<stdlib.h>
int main(){
	//宣告
	int n;
	//手動輸入
	scanf("%d", &n);
	int m=n;
	//如果輸入數字是質數輸出False
	for(int i=2;i<m/2+1;i++){
		if(m%i==0){
			printf("False");
			m/=i;
			break;
		}
	}
	if(m==n){
		printf("True");
	}
	return 0;
}
