#include<stdio.h>

int main(){
	//�]�p�覡�G
	//�@�B�@�~��365�ѡ]��n�O52��§���S�@�ѡ^�C�褸1�~1��1�鬰�P���@�A
	//�褸2�~1��1��P���G�A�����D�q�褸1�~��Ӧ~�쩳���h�֦���~�C
	//�G�B�̦��覡�N�i�H����X�C�몺1���O�P���X�C
	//�T�B�{�|�~�@�|�A�ʦ~���|�A�{�|�ʦ~�S�@�| 
	
	int remainder; //�D��J�~��1��1�鬰�P���X
    int year; //��J�~��
    int month; //��J���
    int day[12]={31,28,31,30,31,30,31,31,30,31,30,31}; //�w�q12����U����Ѽ�
    int dayrem; //��J�~��1��1�餧�l��
    
    printf("�п�J�~���G ");
    scanf("%d", &year);
    printf("�п�J����G ");
    scanf("%d", &month);
    
    remainder=(year-1+(year-1)/4-(year-1)/100+(year-1)/400)%7;
	//�v���褸1�~1��1�鬰�P���@
    //�D�X��J�~���Ĥ@�Ӥ뤧�l�ƥ����p��|�~,�Y�Ӧ~�i
    //�Q100����,�h�Ӧ~���O�|�~,���Y�Ӧ~�i�Q400����,���]�O�|�~
    //�D�X��J�~���e�@�~12��31��P���X
     
    if ((year%4 == 0 && year%100 != 0) || year%400 == 0){
	    if (month>=2) {
			//�Y�Ӧ~�O�|�~�h�l��+1,2����]�אּ29��
			day[1]=29;
		}
	}
    
    for (int i=0;i<(month-1);i++) {
    	//�D�X��J�~����J��1�餧�`�Ѽ�
		remainder+=day[i];
    }
    dayrem=(remainder+1)%7; //�D�X��J���1�鬰�P���X(�]���q�P����p��G+1)
    
    printf("�褸%d�~%d��\n", year, month);
    printf(" ��  �@  �G  �T  �|  ��  ��");
    printf("\n");
    
    for (int i=0;i<dayrem;i++){
		printf("    ");
	}
	
	int count = dayrem%7; 
	for (int i=0;i<day[month-1];i++){
		//�Ӥ��1��q�P���X�}�l�̧Ƕ�J���
		printf("%3d ", i+1);//3�Ӧr���@��,������J�Ů�
		if (count>=6){
			//�C�g���ᴫ��
			printf("\n");
			count=0;
		}
		else{count++; }
	}
	
	return 0;
} 
