//請宣告一個大小為100的陣列，並使用迴圈，將其填入1~100，
//並將每個元素顯示出來。
#include<stdio.h>
int main(){
	int a[100];
	for(int i=0;i<100;i++){
		a[i]=i+1;
		printf("%d ", a[i]);
	}
	return 0;
}
