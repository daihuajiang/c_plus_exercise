//��J�@�Ӭ�ơA �N�Ӵ����u�ɡG���v�J�@�Ӭ�ơA
//�N�Ӵ����u�ɡG���v�p��J 10000�A�h��X 2:46:40�C
#include<stdio.h>
#include<stdlib.h>
int main(){
	//�ŧi
	int n,total=0,h=0,m=0,s=0;
	//��ʿ�J
	scanf("%d", &n);
	total=n;
	//�p��p�� 
	h=n/(60*60);
	total-=h*60*60;
	//�p����� 
	m=total/60;
	total-=m*60;
	//�p���� 
	s=total;
	//��X 
	printf("%d:%d:%d",h,m,s);
	return 0;
}
