#include<stdio.h>
main()
{
	int i,b,c,a[3];
	printf("enter value of an array:\n");
	for(i=0;i<3;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<3;i++)
	{
		if(a[0]==a[1])
		{
		  a[0]=b;	
		}
	else
	{
	a[2]=c;	
	}
	}
		if(a[0]==a[1])
		{
		 printf("the total number is:%d",b);	
		}
	else
	{
	 printf("the total number is:%d",c);	
	}
	

}
