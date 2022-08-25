//輸入兩個正整數 m 和 n，輸出自 m 至 n 的總和（包含 m 和 n）
#include<stdio.h>
#include<stdlib.h>
int main(){
	//宣告
	int m,n,sum=0;
	//手動輸入
	scanf("%d %d",&m,&n);
	//計算m到n的總和 
	for(int i=m;i<=n;i++){
		sum+=i;
	}
	//輸出 
	printf("%d",sum);
	return 0;
}
