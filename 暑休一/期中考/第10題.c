//��J�@�ӼƦr�A�X����������T���ΡC
#include<stdio.h>
#include<stdlib.h>
int main(){
	//�ŧi
	int n;
	//��ʿ�J
	scanf("%d", &n);
	//��X*�զ����T���� 
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			if(j<i){
				printf(" ");
			}
			else{
				printf("*");
			}
		}
		printf("\n");
	}
	return 0;
}
