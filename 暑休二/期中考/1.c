#include<stdio.h>
float mean(int *arr, int n){
	int sum = 0;
	for(int i=0;i<n;i++){
		sum += arr[i];
	}
	float mean=sum/(n*1.0);
	return mean;
}

int main(){
	int n=6;
	int a[n];
	for(int i=0;i<n;i++){
		scanf("%d", &a[i]);
	}
	printf("%f", mean(a, n));
	return 0;
} 
