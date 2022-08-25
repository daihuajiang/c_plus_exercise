//輸入一個數字，出相應邊長的三角形。
#include<stdio.h>
#include<stdlib.h>
int main(){
	//宣告
	int n;
	//手動輸入
	scanf("%d", &n);
	//輸出*組成的三角形 
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
