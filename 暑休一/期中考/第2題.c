//�иռg�@�{���iŪ���ѨϥΪ̿�J���ƨåX�۹��������Z���� (
#include<stdio.h>
#include<stdlib.h>
int main(){
	//�ŧi
	int n;
	//��ʿ�J
	scanf("%d", &n);
	//�P�_��J�����ݩ���ӵ��Ĩÿ�X 
	if(n>=80&&n<=100){
		printf("A");
	} 
	else if(n>=60&&n<80){
		printf("B");
	}
	else if(n>=40&&n<60){
		printf("C");
	}
	else if(n>=0&&n<40){
		printf("D");
	}
	return 0;
}
