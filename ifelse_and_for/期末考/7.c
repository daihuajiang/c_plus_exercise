//請使用者輸入一個字串，至少包含一個「,」字元，
//並透過「,」將其分為多行顯示
#include<stdio.h>
#include<string.h>
int main(){
	char str[100];
	scanf("%s", str);
	for(int i=0;i<strlen(str);i++){
		if(str[i]==','){
			printf("\n");
		}
		else{
			printf("%c",str[i]);
		}
	}
	return 0;
}
