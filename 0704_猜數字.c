#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main()
{
	//�]�w�ܼ� 
	int a,b=0,c,min=1,max=100;
	//�H���� 
	srand(time(0)); 
	a=1+rand()%100;
    printf("�q�Ʀr1~100\n");
    printf("�п�J�@�ӼƦr: ");
	
	//while�j��A�P�_�O�_�q��Ʀr
	do
	{ 
		scanf("%d",&c);
	    if(a==c) {
	    	printf("�q��F");
	    	b=1;
		}
		if(c>max || c<min) {
			printf("�п�J�@�ӼƦr(%d~%d): ", min, max); 
		} 
		else{
			if(a<c) {
		    	max=c-1;
				printf("�Ӥj,�п�J�@�ӼƦr(%d~%d): ", min, max); 
				c=c+1;
			}
			if(a>c) {
				min=c+1;
				printf("�Ӥp,�п�J�@�ӼƦr(%d~%d): ", min, max);
				c=c+1;
			} 
		}
	    
    } while(b==0);
	return 0; 
}
