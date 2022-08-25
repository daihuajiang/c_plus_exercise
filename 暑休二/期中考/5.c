#include<stdio.h>

void power(int a, int b, int n){
	if(b<=1){
		printf("%d", n);
	}
	else{
		n *= a;
		power(a, b-1, n);
	}
}

int main(){
	int a, b;
	scanf("%d %d", &a, &b);
	power(a,b,a);
	return 0;
} 
