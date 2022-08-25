#include<stdio.h>

void triangle(int m, int n){
	if(n>0){
		for(int i=0;i<m;i++){
			if(i>=n-1){
				printf("*");
			}
			else{
				printf(" ");
			}
		} 
		printf("\n");
		triangle(m, n-1);
	}
}

int main(){
	int n;
	printf("input the triangle width: ");
	scanf("%d", &n);
	triangle(n, n);
	return 0;
} 
