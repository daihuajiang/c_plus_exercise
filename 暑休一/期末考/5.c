//請使用者輸入兩個字串，判斷第一個字串中，是否包含第二個字串。
#include<stdio.h>
#include<string.h>
int main(){
	
	char str1[100];
	printf("input1:\n");
	scanf("%s", str1);
	printf("\n");
	char str2[100];
	printf("input2:\n");
	scanf("%s", str2);
	int i=0,j=0;
	int flag=1;
	int pos=-1;
	while(i<strlen(str1)){
		while(j<strlen(str2)){
			if(str1[i]==str2[j]){
				i++;
				j++;
				flag=1;
				pos=i-j;
			}
			else{
				j=0;
				flag=0;
				pos=-1;
				break;
			}
		}
		i++;
	}
	if(flag==0){
		printf("False");
	}
	else{
		printf("True");
	}
	
	printf("\n%d",pos);
	/*
	char e[100] , f[100];
	printf("Input主字串:");
	scanf("%s",e);
	printf("Input子字串:");
	scanf("%s",f);
	if(strstr(e,f)){
		printf("True\n");
	}
	else{
		printf("False\n"); 
	} 
	*/
	return 0;
}
