//�ШϥΪ̿�J�@��1~5�������Ʀrm
//���ۻs�@�@��4x4���G���}�C�A�C�Ӥ������y�Ь�(x,y)
//�Yx+y���Ȭ�m�����ơA�h��J1�A�_�h��J0
#include<stdio.h>
int main(){
	int m;
	scanf("%d",&m);
	int a[4][4];
	for(int i=0;i<4;i++){
		for(int j=0;j<4;j++){
			if((i+j)%m==0){
				a[i][j]=1;
			}
			else{
				a[i][j]=0;
			}
		}
	}
	
	for(int i=0;i<4;i++){
		for(int j=0;j<4;j++){
			printf("%d ",a[i][j]);
		}
		printf("\n");
	}
	return 0;
}
