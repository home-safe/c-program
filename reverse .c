#include<stdio.h>
main()
{
	int i,a[3];
	printf("enter the value of an array:\n");
	for(i=0;i<3;i++)
	{
	  scanf("%d",&a[i]);	
	}
	printf("the simply of a is:");
	for(i=0;i<3;i++)
	{
		printf("%d",a[i]);
		printf(" ");
	}
	printf("\n");
	printf("the reverse of a is:");
	for(i=2;i>=0;i--)
	{
		printf("%d",a[i]);
		printf(" ");
	}
	
	
     
}
