#include<stdio.h>

void Towers(int n,char a,char b,char c){
	if(n==1){
		printf("Move disk %d from %c to  %c\n", n, a, c);
	}
	else{
		Towers(n-1,a,c,b);
		printf("Move disk %d from %c to  %c\n", n, a, c);
		Towers(n-1,b,a,c);
	}
}
int main() {
	int n;
	scanf("%d", &n);
	Towers(n,'A','B','C');
	
	printf("\n");
	return 0;
}
