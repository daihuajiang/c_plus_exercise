//請宣告一個大小為5的陣列，令使用者輸入5個數字儲存入該陣列，程式顯示出該陣列每個元素的和。
#include<stdio.h>
int main(){
	int a[5];
	for(int i=0;i<5;i++){
		scanf("%d", &a[i]);
	}
	int sum=0;
	for(int i=0;i<5;i++){
		sum+=a[i];
	}
	printf("%d", sum);
	return 0;
}
