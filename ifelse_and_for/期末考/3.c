//請使用者輸入一個字串，並透過將每個字串的值+1做加密輸出
#include<stdio.h>
#include<string.h>
int main(){
	char str[100];
	scanf("%s", str);
	for(int i=0;i<strlen(str);i++){
		str[i]+=1;
	}
	printf("%s", str);
	return 0;
}
