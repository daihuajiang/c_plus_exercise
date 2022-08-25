#include<stdio.h>
float Area(float a, float b, float height){
	return (a+b)*height/2;
}

int main(){
	float a, b, height;
	printf("輸入梯形的長、寬、高 ");
	scanf("%f %f %f",&a, &b, &height);
	float area = Area(a, b, height);
	printf("面積= %f",area);
	
	return 0;
} 
