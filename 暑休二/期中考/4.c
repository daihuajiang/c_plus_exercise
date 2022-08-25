#include<stdio.h>
#include<string.h>
//»¼°j­ËÂà¦r¦ê

void swap(char *a, char *b){
	int temp = *a;
	*a = *b;
	*b = temp;
}
 
void arr(char *number, int n, int i){
	//printf("%s", number);
	if(i>=n/2){
		printf("%s", number);
	}
	else{
		swap(&number[i], &number[n-i-1]);
		arr(number, n, i+1);
	}
}

int main(){
	char num[10];
	scanf("%s", num);
	arr(num, strlen(num), 0);
	return 0;
} 
