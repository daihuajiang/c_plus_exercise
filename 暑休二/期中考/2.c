#include<stdio.h>
#include<math.h>
int Area(float a, float b, float height){
	return round((a+b)*height/2);
}

int main(){
	float a, b, height;
	printf("��J��Ϊ����B�e�B��: ");
	scanf("%f %f %f",&a, &b, &height);
	int area = Area(a, b, height);
	printf("���n= %d",area);
	
	return 0;
} 
