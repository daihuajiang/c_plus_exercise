//輸入一個秒數， 將該換成「時：分」入一個秒數，
//將該換成「時：分」如輸入 10000，則輸出 2:46:40。
#include<stdio.h>
#include<stdlib.h>
int main(){
	//宣告
	int n,total=0,h=0,m=0,s=0;
	//手動輸入
	scanf("%d", &n);
	total=n;
	//計算小時 
	h=n/(60*60);
	total-=h*60*60;
	//計算分鐘 
	m=total/60;
	total-=m*60;
	//計算秒數 
	s=total;
	//輸出 
	printf("%d:%d:%d",h,m,s);
	return 0;
}
