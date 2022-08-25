//1!+2!+...+n!
#include<stdio.h>
#include<stdlib.h>
int main(){
	//宣告
	int n,sum=0;
	//手動輸入
	scanf("%d",&n);
	//計算1!+2!+...+n!的總和 
	for(int i=1;i<=n;i++){
		int m=1;
		//計算n!的值 
		for(int j=1;j<=i;j++){
			m*=j;
		}
		sum+=m;
	}
	//輸出 
	printf("%d", sum);
	return 0;
}
