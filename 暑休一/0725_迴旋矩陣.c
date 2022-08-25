//迴旋二維陣列
#include<stdio.h>
#include<stdlib.h>

int main(){
	//輸入矩陣長寬 
	int n;
	scanf("%d", &n);
	printf("\n");
	
	//宣告矩陣
	int array[n][n];
	
	//初始化矩陣 
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			array[i][j]=0;
		}
	}
	
	//紀錄填入第幾個數字 
	int count=1;
	//x: 列(上下), y: 行(左右) 
	int x=0, y=0;
	//dx:上下移動, dy: 左右移動
	int dx=0, dy=1;
	
	while(count<=n*n){
		//填入數字
		array[x][y] = count;
		//下次填入的矩陣位置
		x+=dx;
		y+=dy;
		
		//決定下次移動方向
		//原本向右，如果到達最右邊的位置或右邊的元素不是0，改成向下
		if(dy==1 && (y>=n-1 || array[x][y+1]!=0)){
			dx=1;
			dy=0;
		}
		//原本向下，如果到達最下面的位置或下面的元素不是0，改成向左
		else if(dx==1 && (x>=n-1 || array[x+1][y]!=0)){
			dx=0;
			dy=-1;
		}
		//原本向左，如果到達最左邊的位置或左邊的元素不是0，改成向上
		else if(dy==-1 && (y<=0 || array[x][y-1]!=0)){
			dx=-1;
			dy=0;
		}
		//原本向上，如果到達最上面的位置或上面的元素不是0，改成向右
		else if(dx==-1 && (x<=0 || array[x-1][y]!=0)){
			dx=0;
			dy=1;
		}
		count++;
	}
	
	//印出矩陣
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			printf("%2d ",array[i][j]);
		}
		printf("\n");
	} 
	return 0;
}
