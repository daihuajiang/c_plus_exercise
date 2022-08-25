#include<stdio.h>
int Loop(int count){
	if(count<100){
		printf("%d ", count+1);
	}
	Loop(count+1);
}

int main(){
	int i=0;
	Loop(i);
	
	return 0;
} 
