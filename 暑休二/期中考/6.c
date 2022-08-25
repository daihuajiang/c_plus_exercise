//2 2 2 6 10 18 34 ¡K
#include<stdio.h>
int Sum(int n){
	if(n == 1){
		return 2;
	}
	else if(n == 2){
		return 2;
	}
	else if(n == 3){
		return 2;
	}
	else if(n > 3){
		return Sum(n-3)+Sum(n-2)+Sum(n-1);
	}
}

int main(){
	int n;
	scanf("%d", &n);
	printf("%d", Sum(n));
	return 0;
} 
