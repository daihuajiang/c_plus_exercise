#include<stdio.h>
#include<math.h>
int Area(float a, float b, float height){
	return round((a+b)*height/2);
}

int main(){
	float a, b, height;
	printf("輸入梯形的長、寬、高: ");
	scanf("%f %f %f",&a, &b, &height);
	int area = Area(a, b, height);
	printf("面積= %d",area);
	
	return 0;
} 
