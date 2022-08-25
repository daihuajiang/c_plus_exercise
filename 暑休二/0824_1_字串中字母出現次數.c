/*不區分大小寫*/
#include<stdio.h>
int main(){
	int sum[26]={0};
	char s[1024]="";
	scanf("%s",s);
	int i;
	for(i=0;s[i];i++)
	{
		if(s[i] >='a' && s[i] <='z'){
			sum[s[i]-'a']++;   //sum[s[i]-'a']將a記作s[0],b記作s[1]...
		}
		else if(s[i] >='A' && s[i]<='Z'){
			sum[s[i]-'A']++; //sum[s[i]-'A']將A記作s[0],b記作s[1]...
		}
	}
	
	
	for(i=0;i<26;i++){
		if(sum[i]){
			printf("'%c'=%d\n", i+'a',sum[i]);
		}
	}
	
	
	return 0;
}
