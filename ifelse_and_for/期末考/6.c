//�ШϥΪ̿�J�@�Ӧr��B�@�ӼƦr�N��_�l�ȡB�@�ӼƦr�N�����
#include<stdio.h>
#include<string.h>
int main(){
	char g[100],h[100];
	int sta,l;
	printf("��J�r��B�_�l�ȡB�r�����:");
	scanf("%s %d %d",g,&sta,&l);
	for(int i=sta;i<sta+l;i++){
		printf("%c\n",g[i]);
	}
	//printf("%s\n",h);
	return 0;
}
