//�ШϥΪ̿�J�@�Ӧr��A���ˬd�Ӧr��O�_���k��١A
//�p�G�O�A��� True�F�_�h�A���False
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
