/*���Ϥ��j�p�g*/
#include<stdio.h>
int main(){
	int sum[26]={0};
	char s[1024]="";
	scanf("%s",s);
	int i;
	for(i=0;s[i];i++)
	{
		if(s[i] >='a' && s[i] <='z'){
			sum[s[i]-'a']++;   //sum[s[i]-'a']�Na�O�@s[0],b�O�@s[1]...
		}
		else if(s[i] >='A' && s[i]<='Z'){
			sum[s[i]-'A']++; //sum[s[i]-'A']�NA�O�@s[0],b�O�@s[1]...
		}
	}
	
	
	for(i=0;i<26;i++){
		if(sum[i]){
			printf("'%c'=%d\n", i+'a',sum[i]);
		}
	}
	
	
	return 0;
}
