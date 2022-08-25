#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(){
	//�Ыؤ@���x�s1~16���x�} 
	srand(time(0));
	int array[16];
	for(int i=0;i<16;i++){
		array[i]=i+1;
	}
	
	//�N1~16�������H������ 
	for(int i=0;i<16;i++){
		int a=rand()%16;
		int b=rand()%16;
		int temp=array[a];
		array[a]=array[b];
		array[b]=temp;
	}
	
	//�Ыػ��G�L���ö�J�Ʀr 
	int bingo[4][4];
	int count=0;
	for(int i=0;i<4;i++){
		for(int j=0;j<4;j++){
			bingo[i][j]=array[count];
			count++;
		} 
	}
	
	//�L�X���G�L��
	for(int i=0;i<4;i++){
		for(int j=0;j<4;j++){
			printf("%2d ",bingo[i][j]);
		} 
		printf("\n");
	}
	printf("\n");
	
	//�Ыج����ϥΪ̿�J�Ʀr���x�}
	int player_input[16]={0};
	
	//�Ыج������G�L���s�u���p���x�} 
	int line[4][4]={0};
	
	//�������S�����G
	int check=0;
	
	//�����ϥΪ̿�J�Ʀr���ƶq 
	count=0;
	
	//�ϥΪ̿�J�Ʀr
	while(count<16){
		int n=0;
		while(n<1||n>16){
			printf("player%d��J�Ʀr(1~16): ",count%2+1);
			scanf("%d",&n);
			printf("\n");
			
			//�ˬd�ϥΪ̿�J���Ʀr�O�_�W�X�d��A�p�G���N���s��J 
			if(n<1||n>16){
				printf("�Ʀr�W�X�d��\n");
				continue;
			}
			
			//�ˬd�ϥΪ̿�J���Ʀr�O�_�w�g�Q��J�L�A�p�G���N���s��J 
			for(int i=0;i<count;i++){
				if(n==player_input[i]){
					printf("�Ʀr�w�g�Q��J�L\n");
					n=0;
					break;
				}
			}
		}
		
		//��s�����ϥΪ̿�J�Ʀr���x�}
		player_input[count]=n;
		
		//��s���G�L���s�u���p 
		for(int i=0;i<4;i++){
			for(int j=0;j<4;j++){
				if(n==bingo[i][j]){
					line[i][j]=count%2+1;
				}
			} 
		}
		
		//�L�X���G�L���s�u���p
		printf("  �ثe�L��\t�ثe�s�u  \n");
		for(int i=0;i<4;i++){
			int output[8]={0};
			for(int j=0;j<4;j++){
				if(line[i][j]!=0){
					output[j]=bingo[i][j];
					output[j+4]=line[i][j];
				}
				else{
					output[j]=line[i][j];
					output[j+4]=line[i][j];
				}
			} 
			for(int j=0;j<8;j++){
				if(j==4){
					printf("  ");
				}
				printf("%2d ",output[j]);
			}
			printf("\n");
		}
		
		//�ˬd���S�����G
		if(count>=6){
			for(int i=0;i<4;i++){
				//�ˬd��u
				if(line[i][0]!=0&&line[i][0]==line[i][1]&&line[i][0]==line[i][2]&&line[i][0]==line[i][3]){
					printf("\nplayer%d bingo!", count%2+1);
					check=1;
					break;
				}
				//�ˬd���u
				if(line[0][i]!=0&&line[0][i]==line[1][i]&&line[0][i]==line[2][i]&&line[0][i]==line[3][i]){
					printf("\nplayer%d bingo!", count%2+1);
					check=1;
					break;
				}
			} 
			//�ˬd�׽u
			if(line[0][0]!=0&&line[0][0]==line[1][1]&&line[0][0]==line[2][2]&&line[0][0]==line[3][3]){
				printf("\nplayer%d bingo!", count%2+1);
				check=1;
			}
			if(line[0][3]!=0&&line[0][3]==line[1][2]&&line[0][3]==line[2][1]&&line[0][3]==line[3][0]){
				printf("\nplayer%d bingo!", count%2+1);
				check=1;
			}
			
			//�p�G�����G�����C�� 
			if(check==1){
				break;
			}
		}
		printf("\n");
		count++;
	}
	
	//�p�G�Ҧ��Ʀr���w�g�Q��J�٨S�����G�h���� 
	if(count>=16&&check==0){
		printf("Draw.");
	}
	return 0;
} 
