#include<stdio.h>
#include<stdlib.h>
int main(){
	//�ŧi�}�C 
	/* 
	//�}�C���T�w�j�p 
	int n = 5;
	int array[n];
	*/
	
	//�}�C�j�p�ݤ�ʿ�J 
	int *array;
	int n;
	printf("��J�}�C����: ");
	scanf("%d", &n);
	
	array = malloc( n * sizeof(int) ); 
	
	//��J�}�C���� 
	printf("\n��J�}�C����: ");
	for(int i=0;i<n;i++){
		scanf("%d", &array[i]);
	}
	
	//�ϥ�count�����}�C�O�_��� 
	int count=0;
	//�ˬd�}�C�O�_���
	for(int i=0;i<n/2+1;i++){
		if(n%2==1&&i==i<n/2+1){
			break;
		}
		else{
			if(array[i]!=array[n-1-i]){
				printf("�S�����");
				count=1;
				break;
			}
		}
	}
	if(count==0){
		printf("�����");
	}
	return 0;
} 
