#include<stdio.h>
#include<stdlib.h>
int main()
{
	int a;
	float b;//�Τp���ܶq
	scanf("%f",&b);
	a=(int)b;//�h���p�Ƴ���
	if(a==b&&a>0){//�S���p�ƪ��M���p�ƪ���A�}�B�P�_�O���O����ơC
		//�p�Ƴ����O0�A�O�����
		printf("�O�����");
	}
	else{
		printf("���O�����");
	}
	return 0;
} 
