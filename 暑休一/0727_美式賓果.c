#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(){
	//創建一個儲存1~16的矩陣 
	srand(time(0));
	int array[16];
	for(int i=0;i<16;i++){
		array[i]=i+1;
	}
	
	//將1~16的順序隨機打亂 
	for(int i=0;i<16;i++){
		int a=rand()%16;
		int b=rand()%16;
		int temp=array[a];
		array[a]=array[b];
		array[b]=temp;
	}
	
	//創建賓果盤面並填入數字 
	int bingo[4][4];
	int count=0;
	for(int i=0;i<4;i++){
		for(int j=0;j<4;j++){
			bingo[i][j]=array[count];
			count++;
		} 
	}
	
	//印出賓果盤面
	for(int i=0;i<4;i++){
		for(int j=0;j<4;j++){
			printf("%2d ",bingo[i][j]);
		} 
		printf("\n");
	}
	printf("\n");
	
	//創建紀錄使用者輸入數字的矩陣
	int player_input[16]={0};
	
	//創建紀錄賓果盤面連線狀況的矩陣 
	int line[4][4]={0};
	
	//紀錄有沒有賓果
	int check=0;
	
	//紀錄使用者輸入數字的數量 
	count=0;
	
	//使用者輸入數字
	while(count<16){
		int n=0;
		while(n<1||n>16){
			printf("player%d輸入數字(1~16): ",count%2+1);
			scanf("%d",&n);
			printf("\n");
			
			//檢查使用者輸入的數字是否超出範圍，如果有就重新輸入 
			if(n<1||n>16){
				printf("數字超出範圍\n");
				continue;
			}
			
			//檢查使用者輸入的數字是否已經被輸入過，如果有就重新輸入 
			for(int i=0;i<count;i++){
				if(n==player_input[i]){
					printf("數字已經被輸入過\n");
					n=0;
					break;
				}
			}
		}
		
		//更新紀錄使用者輸入數字的矩陣
		player_input[count]=n;
		
		//更新賓果盤面連線狀況 
		for(int i=0;i<4;i++){
			for(int j=0;j<4;j++){
				if(n==bingo[i][j]){
					line[i][j]=count%2+1;
				}
			} 
		}
		
		//印出賓果盤面連線狀況
		printf("  目前盤面\t目前連線  \n");
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
		
		//檢查有沒有賓果
		if(count>=6){
			for(int i=0;i<4;i++){
				//檢查橫線
				if(line[i][0]!=0&&line[i][0]==line[i][1]&&line[i][0]==line[i][2]&&line[i][0]==line[i][3]){
					printf("\nplayer%d bingo!", count%2+1);
					check=1;
					break;
				}
				//檢查直線
				if(line[0][i]!=0&&line[0][i]==line[1][i]&&line[0][i]==line[2][i]&&line[0][i]==line[3][i]){
					printf("\nplayer%d bingo!", count%2+1);
					check=1;
					break;
				}
			} 
			//檢查斜線
			if(line[0][0]!=0&&line[0][0]==line[1][1]&&line[0][0]==line[2][2]&&line[0][0]==line[3][3]){
				printf("\nplayer%d bingo!", count%2+1);
				check=1;
			}
			if(line[0][3]!=0&&line[0][3]==line[1][2]&&line[0][3]==line[2][1]&&line[0][3]==line[3][0]){
				printf("\nplayer%d bingo!", count%2+1);
				check=1;
			}
			
			//如果有賓果結束遊戲 
			if(check==1){
				break;
			}
		}
		printf("\n");
		count++;
	}
	
	//如果所有數字都已經被輸入還沒有賓果則平手 
	if(count>=16&&check==0){
		printf("Draw.");
	}
	return 0;
} 
