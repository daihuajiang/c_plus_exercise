//�Ыŧi�H�U�G���}�C
//���۳z�L�{���N�䶶�ɰw����90�סA����ܥX��
#include<stdio.h>
int main(){
	int a[4][4];
	int n=1;
	for(int i=0;i<4;i++){
		for(int j=0;j<4;j++){
			a[i][j]=n;
			n++;
		}
	}
	
	for(int i=0;i<4;i++){
		for(int j=0;j<4;j++){
			printf("%2d ",a[i][j]);
		}
		printf("\n");
	}
	printf("\n");
	for(int j=0;j<4;j++){
		for(int i=4-1;i>=0;i--){
			printf("%2d ",a[i][j]);
		}
		printf("\n");
	}
	return 0;
}
