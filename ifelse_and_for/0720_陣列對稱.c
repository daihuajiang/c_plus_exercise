#include<stdio.h>
#include<stdlib.h>
int main(){
	//宣告陣列 
	/* 
	//陣列為固定大小 
	int n = 5;
	int array[n];
	*/
	
	//陣列大小需手動輸入 
	int *array;
	int n;
	printf("輸入陣列長度: ");
	scanf("%d", &n);
	
	array = malloc( n * sizeof(int) ); 
	
	//輸入陣列元素 
	printf("\n輸入陣列元素: ");
	for(int i=0;i<n;i++){
		scanf("%d", &array[i]);
	}
	
	//使用count紀錄陣列是否對稱 
	int count=0;
	//檢查陣列是否對稱
	for(int i=0;i<n/2+1;i++){
		if(n%2==1&&i==i<n/2+1){
			break;
		}
		else{
			if(array[i]!=array[n-1-i]){
				printf("沒有對稱");
				count=1;
				break;
			}
		}
	}
	if(count==0){
		printf("有對稱");
	}
	return 0;
} 
