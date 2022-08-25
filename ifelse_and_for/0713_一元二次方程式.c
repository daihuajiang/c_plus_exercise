#include <stdio.h>
#include <math.h>
 
int main()
{
        float a,b,c,x1,x2,d;
        
        printf("求ax^2+b+c=0");
        printf("輸入方程式的三個係數:");
        scanf("%f %f %f",&a,&b,&c);
        
        while(a==0){
        	printf("a不能等於0\n");
        	printf("輸入方程式的三個係數:");
        	scanf("%f %f %f",&a,&b,&c);	
		}
        
        //一元二次方程式求解公式:-b+-sqrt(b^2-4ac)/2a
        d = b*b-4*a*c;
        
        if(d>0){
            x1=(-b+sqrt(d))/(2*a);
            x2=(-b-sqrt(d))/(2*a);
             
            printf("x1=%f, x2=%f\n",x1,x2); 
                
        }
        else if(d==0){
        	x1=(-b+sqrt(d))/(2*a);
        	printf("x1=x2=%f\n",x1,x1);
		}
		else{
			printf("此題無實數解");
		}
        return 0;
}
