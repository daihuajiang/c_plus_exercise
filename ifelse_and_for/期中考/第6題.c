//��J��ӥ���� m �M n�A�X�̤p������
#include<stdio.h>
#include<stdlib.h>
int main(){
	//�ŧi
	int m,n;
	//��ʿ�J
	scanf("%d %d",&m,&n);
	//��X�̤p������ 
	for(int i=1;i<=m*n;i++){
		if(i%m==0&&i%n==0){
			printf("%d",i);
			break;
		}
	}
	return 0;
}
