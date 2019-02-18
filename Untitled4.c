#include<stdio.h>
#include<math.h>
main()
{
	int a,b,c;
	float deta,x1,x2;
	printf("Enter value of a");
	scanf("%d",&a);
	printf("Enter value of b");
	scanf("%d",&b);	
	printf("Enter value of c");
	scanf("%d",&c);
	deta=(pow(b,2)-(4*a*c));
	   if (deta==0)
	   {
	   x1=x2=(-b)/(2*a);
      	printf("x1=x2=%0.1f",x1);
      }
       else if (deta<0)
       {
       printf("No root/n");
   }
      else if (deta>0)
       {
       	x1=(-b-sqrt(deta))/(2*a);
       	x2=(-b+sqrt(deta))/(2*a);
       	printf("x1 is=%0.2f",x1);
       	printf("x2 is=%0.2f",x2);
	   }
       
       
	
	
	
}
