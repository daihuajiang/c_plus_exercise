//輸入一個正整數，判斷它是否為 7的倍數 ，
//如果是則輸出 1，否則輸出 0。
#include<stdio.h>
int main(){
	//宣告 
	int n;
	//手動輸入 
	scanf("%d", &n);
	//判斷輸入的數字是否為7的倍數並輸出 
	if(n%7==0){
		printf("1");
	}
	else{
		printf("0");
	}
	return 0;
} 
