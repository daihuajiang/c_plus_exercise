//請使用者輸入一個字串，並檢查該字串是否左右對稱，
//如果是，顯示 True；否則，顯示False
#include<stdio.h>
int main(){
	char str[100];
	scanf("%s", str);
	int flag=1;
	for(int i=0;i<strlen(str)/2;i++){
		if(str[i]!=str[strlen(str)-i-1]){
			flag=0;
			printf("False");
			break;
		} 
	}
	if(flag==1){
		printf("True");
	}
	return 0;
}
