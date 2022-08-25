#include<stdio.h>
#include<stdlib.h>

void shuffle(int n , int A[]){
	for(int i = 0;i<n*100;i++){
		int x = rand()%n;
		int y = rand()%n;
		int tmp=A[x];
		A[x]=A[y];
		A[y]=tmp;
	}
	
	
}
int main(){
	srand(time(NULL));
	int A[]={1,2,3,4,5,6,7,8,9,0};
	int n = 10,x = 0;
	shuffle (n,A);
	//檢查數字
	for(int i = 0;i<4;i++){
		printf("%d",A[i]);
	}
	printf("\n");
	printf("猜數字1A2B:");
	while(1){
		scanf("%d",&x);
		int a = 0,b = 0;
		int B[]={x/1000,(x%1000)/100,(x%100)/10,x%10};
		for(int i = 0;i<4;i++){
			for(int j = 0;j<4;j++){
				if(A[i]==B[j] && i!=j) b++;
				if(A[i]==B[j] && i==j) a++;
			}
		}
		printf("%dA%dB\n",a,b);
		if(a==4){
			printf("答對");
			break;
		}
	}
	return 0;
} 
