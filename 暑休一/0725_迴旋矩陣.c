//�j�ۤG���}�C
#include<stdio.h>
#include<stdlib.h>

int main(){
	//��J�x�}���e 
	int n;
	scanf("%d", &n);
	printf("\n");
	
	//�ŧi�x�}
	int array[n][n];
	
	//��l�Ưx�} 
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			array[i][j]=0;
		}
	}
	
	//������J�ĴX�ӼƦr 
	int count=1;
	//x: �C(�W�U), y: ��(���k) 
	int x=0, y=0;
	//dx:�W�U����, dy: ���k����
	int dx=0, dy=1;
	
	while(count<=n*n){
		//��J�Ʀr
		array[x][y] = count;
		//�U����J���x�}��m
		x+=dx;
		y+=dy;
		
		//�M�w�U�����ʤ�V
		//�쥻�V�k�A�p�G��F�̥k�䪺��m�Υk�䪺�������O0�A�令�V�U
		if(dy==1 && (y>=n-1 || array[x][y+1]!=0)){
			dx=1;
			dy=0;
		}
		//�쥻�V�U�A�p�G��F�̤U������m�ΤU�����������O0�A�令�V��
		else if(dx==1 && (x>=n-1 || array[x+1][y]!=0)){
			dx=0;
			dy=-1;
		}
		//�쥻�V���A�p�G��F�̥��䪺��m�Υ��䪺�������O0�A�令�V�W
		else if(dy==-1 && (y<=0 || array[x][y-1]!=0)){
			dx=-1;
			dy=0;
		}
		//�쥻�V�W�A�p�G��F�̤W������m�ΤW�����������O0�A�令�V�k
		else if(dx==-1 && (x<=0 || array[x-1][y]!=0)){
			dx=0;
			dy=1;
		}
		count++;
	}
	
	//�L�X�x�}
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			printf("%2d ",array[i][j]);
		}
		printf("\n");
	} 
	return 0;
}
