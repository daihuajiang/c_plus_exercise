//1!+2!+...+n!
#include<stdio.h>
#include<stdlib.h>
int main(){
	//�ŧi
	int n,sum=0;
	//��ʿ�J
	scanf("%d",&n);
	//�p��1!+2!+...+n!���`�M 
	for(int i=1;i<=n;i++){
		int m=1;
		//�p��n!���� 
		for(int j=1;j<=i;j++){
			m*=j;
		}
		sum+=m;
	}
	//��X 
	printf("%d", sum);
	return 0;
}
