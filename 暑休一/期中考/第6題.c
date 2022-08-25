//块ㄢタ俱计 m ㎝ n程そ计
#include<stdio.h>
#include<stdlib.h>
int main(){
	//
	int m,n;
	//も笆块
	scanf("%d %d",&m,&n);
	//块程そ计 
	for(int i=1;i<=m*n;i++){
		if(i%m==0&&i%n==0){
			printf("%d",i);
			break;
		}
	}
	return 0;
}
