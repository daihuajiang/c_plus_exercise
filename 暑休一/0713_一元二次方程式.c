#include <stdio.h>
#include <math.h>
 
int main()
{
        float a,b,c,x1,x2,d;
        
        printf("�Dax^2+b+c=0");
        printf("��J��{�����T�ӫY��:");
        scanf("%f %f %f",&a,&b,&c);
        
        while(a==0){
        	printf("a���൥��0\n");
        	printf("��J��{�����T�ӫY��:");
        	scanf("%f %f %f",&a,&b,&c);	
		}
        
        //�@���G����{���D�Ѥ���:-b+-sqrt(b^2-4ac)/2a
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
			printf("���D�L��Ƹ�");
		}
        return 0;
}
