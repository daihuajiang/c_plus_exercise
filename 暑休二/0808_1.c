#include<stdio.h>
//�p��X1+2+3+...+n���`�M
int Sum(int n){
	if(n < 1){
		return 0;
	}
	else{
		return n + Sum(n-1); 
	}
}

int main(){
	int n;
	scanf("%d", &n);
	printf("%d", Sum(n));
	return 0;
} 
