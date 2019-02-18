#include<stdio.h>
#include<math.h>
main()
{
	int a,b,c;
	float deta,x1,x2;
	printf("input value of a:");
	scanf("%d",&a);
	printf("input value of b:");
	scanf("%d",&b);
	printf("input value of c:");
	scanf("%d",&c);
	deta=(pow(b,2)-4*a*c);
    if(deta>0)
   {
    	x1=(-b-sqrt(deta))/2*a;
   	    x2=(-b+sqrt(deta))/2*a;
   	     printf("x1=%0.2f and x2=%0.2f",x1,x2);	
   }
   }
   else if(deta<0)
     {
       	printf("no root\n");
     }
   else if(deta==0)
	 {
     	x1=x2=-b/2*a;
     	printf("x1=x2=%0.2f",x1,x2);
     }

}
