#include<stdio.h>
//計算出2+4+6+...+n的總和
int Sum(int n){
	if(n <= 2){
		return 2;
	}
	else{
		return n + Sum(n-2); 
	}
}

int main(){
	int n;
	scanf("%d", &n);
	printf("%d", Sum(n));
	return 0;
} 
