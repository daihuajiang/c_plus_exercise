//��J�@�Ӥ��j�� 1000 ����ơA��䰵��]���ѨҦp 60 = 2��2��3��5
#include<stdio.h>
#include<stdlib.h>
int main(){
	//�ŧi
	int n;
	//��ʿ�J
	scanf("%d",&n);
	int max=n;
	//�p���J�Ʀr����]�Ƥ��� 
	while(1){
		//�p��max�̤p����ơA�ñNmax���H�̤p�����
		for(int i=2;i<=n/2+1;i++){
			if(max%i==0){
				printf("%d ",i);
				max=max/i;
				break;
			}	
		}
		//�p�Gmax�����J�Ʀr��ܿ�J�Ʀr����� 
		if(max==n){
			printf("%d",n);
			break;
		}
		//�P�_max�O�_����� 
		int j=0;
		for(int i=2;i<max/2+1;i++){
			if(max%i==0){
				j=0;
				break;
			}
			else{
				j=1;
			}
		} 
		//�p�Gmax�O��ơA���max����J�Ʀr�i���ѥX���̤j����� 
		if(j==1){
			printf("%d",max);
			max/=max;
			break;
		}
	}
	
	return 0;
}
