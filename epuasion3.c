#include<stdio.h>
#include<math.h>
main()
{
	int a,b,c,d,x1;
	float deta,x2,x3,deta1;
	printf("input value of a:");
	scanf("%d",&a);
	printf("input value of b:");
	scanf("%d",&b);
	printf("input value of c:");
	scanf("%d",&c);
    printf("input value of d:");
	scanf("%d",&d);
	deta=(pow(a+b,2)-(4*pow(a,2)+4*a*b+4*a*c));
	deta1=(pow(b-a,2)-(4*pow(a,2)-4*a*b+4*a*c));
	if(a+b+c+d==0)
	{
   		printf("x1=1");
   		if(deta==0)
		{
  			x2=x3=(-(a+b)/(2*a));
  			printf("x2=x3=%0.7f",x2);
		}
	  	else if(deta<0)
		{
	  		printf("No root\n");
		}
	  	else if(deta>0)
	  	{
	  		x2=(-(a+b)-sqrt(deta))/(2*a);
	  		x3=(-(a+b)+sqrt(deta))/(2*a);
	  		printf("x2=%0.7f",x2);
	  		printf("x3=%0.7f",x3);
   		}
   	}
	else if(-a+b-c+d==0)
   	{
   		printf("x1=-1\n");
   		if(deta1==0)
  		{
  			x2=x3=(-(-a+b)/(2*a));
  			printf("x2=x3=%0.7f",x2);
		}
    	else if(deta1<0)
		{
			printf("No root\n");
		}
		else if(deta1>0)
		{
			x2=(-(-a+b)-sqrt(deta1))/(2*a);
			x3=(-(-a+b)+sqrt(deta1))/(2*a);
			printf("x2=%0.7f",x2);
	
			printf("x3=%0.7f",x3);
		}
   	}
} 
