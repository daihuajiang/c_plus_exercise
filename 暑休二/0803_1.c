#include<stdio.h>
float Area(float a, float b, float height){
	return (a+b)*height/2;
}

int main(){
	float a, b, height;
	printf("��J��Ϊ����B�e�B�� ");
	scanf("%f %f %f",&a, &b, &height);
	float area = Area(a, b, height);
	printf("���n= %f",area);
	
	return 0;
} 
