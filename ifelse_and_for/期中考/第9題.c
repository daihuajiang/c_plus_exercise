//��J�@�ӥ���� n�A�P�_ n�O�_�� ��ơC input
#include<stdio.h>
#include<stdlib.h>
int main(){
	//�ŧi
	int n;
	//��ʿ�J
	scanf("%d", &n);
	int m=n;
	//�p�G��J�Ʀr�O��ƿ�XFalse
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
