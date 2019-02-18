#include<stdio.h>
main()
{
	int a,b,c;
	printf("input value of a:");
	scanf("%d",&a);
	printf("input value of b:");
	scanf("%d",&b);
	printf("input value of c:");
	scanf("%d",&c);
	if(a>b)
	{
		if(a>c){
		
		printf("a is greater");
      }
	else 
	{
		printf("c is greater");
     }
	}	
	else
	{
		if(b>c)
		{
		printf("b  is greater");	
		}
		else
		{
		printf("c is greater");
		}
	}
}
