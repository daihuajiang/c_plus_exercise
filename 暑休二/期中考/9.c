#include<stdio.h>
#include <stdlib.h>
#include<string.h>
void swap(char *a, char *b){
	int temp = *a;
	*a = *b;
	*b = temp;
}
//(a)bc->(a)cb->(a)bc->a(b)c->(b)ac->(b)ca->(b)ac->a(b)c
//->ab(c)->(c)ba->(c)ab->(c)ba->ab(c) 
void prem(char *arr, int i, int n){
	int j;
	if(i == n){
		for(j = 0; j < strlen(arr); j++){
			printf("%c", arr[j]);
		} 
		printf("\n");
	}
	else{
		for(j = i; j <= n; j++){
			swap(&arr[i], &arr[j]);
			prem(arr, i + 1, n);
			swap(&arr[i], &arr[j]);
		}
	}
}
 
int main(void){
   int n;
   scanf("%d", &n);
   
   char str[n];
   scanf("%s", str);
   
   prem(str, 0, n-1);
   /* 
   printf("---------------------\n");
   for(int i = 0; i < n ;i++){
		printf("%c ", str[i]);
   }
   printf("\n");
   */ 
   return 0;
}

