//��J��ӥ���� m �M n�A��X�� m �� n ���`�M�]�]�t m �M n�^
#include<stdio.h>
#include<stdlib.h>
int main(){
	//�ŧi
	int m,n,sum=0;
	//��ʿ�J
	scanf("%d %d",&m,&n);
	//�p��m��n���`�M 
	for(int i=m;i<=n;i++){
		sum+=i;
	}
	//��X 
	printf("%d",sum);
	return 0;
}
