//�ШϥΪ̿�J�@�Ӧr��A�óz�L�N�C�Ӧr�ꪺ��+1���[�K��X
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
