#include<stdio.h>
#include<string.h>

int strpos(char str1[], char str2[]){
	int i=0,j=0;
	int pos=-1;
	while(i<strlen(str1)){
		while(j<strlen(str2)){
			if(str1[i]==str2[j]){
				i++;
				j++;
				pos=i-j;
			}
			else{
				j=0;
				pos=-1;
				break;
			}
		}
		i++;
	}
	return pos;
}

int main(){
	char s[100];
	char a[]="[s]";
	char b[]="[d]";
	scanf("%s", s);
	
	int posa = strpos(s, a);
	int posb = strpos(s, b);
	
	if(posa!=-1 && posb!=-1){
		for(int i=posa+3;i<posb;i++){
			printf("%c",s[i]);
		}
	}
	else{
		printf("error");
	}
	
	return 0;	
}
