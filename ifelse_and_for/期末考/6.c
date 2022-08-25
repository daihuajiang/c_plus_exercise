//請使用者輸入一個字串、一個數字代表起始值、一個數字代表長度
#include<stdio.h>
#include<string.h>
int main(){
	char g[100],h[100];
	int sta,l;
	printf("輸入字串、起始值、字串長度:");
	scanf("%s %d %d",g,&sta,&l);
	for(int i=sta;i<sta+l;i++){
		printf("%c\n",g[i]);
	}
	//printf("%s\n",h);
	return 0;
}
