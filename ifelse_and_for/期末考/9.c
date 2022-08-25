#include<stdio.h>
int main(){
	int n,sum=0;
	while( n!= EOF){
		scanf("%d",&n);
		sum+=n;
	}
	printf("%d",sum);
	return 0;
}
