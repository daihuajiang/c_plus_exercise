//�Ыŧi�@�Ӥj�p��5���}�C�A�O�ϥΪ̿�J5�ӼƦr�x�s�J�Ӱ}�C�A�{����ܥX�Ӱ}�C�C�Ӥ������M�C
#include<stdio.h>
int main(){
	int a[5];
	for(int i=0;i<5;i++){
		scanf("%d", &a[i]);
	}
	int sum=0;
	for(int i=0;i<5;i++){
		sum+=a[i];
	}
	printf("%d", sum);
	return 0;
}
