//1 2 2 4 8 32 256 8192 2097152...
#include<stdio.h>
int Sum(int n){
	if(n == 1){
		return 1;
	}
	else if(n == 2){
		return 2;
	}
	else if(n > 2){
		return Sum(n-2)*Sum(n-1);
	}
}

int main(){
	int n;
	scanf("%d", &n);
	printf("%d", Sum(n));
	return 0;
} 
