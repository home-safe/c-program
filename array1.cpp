#include<stdio.h>
main()
{
	int i,a[5],sum=0;
	printf("enter value for an array:\n");
	for(i=0;i<5;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("the array value are\n:");
	for(i=0;i<5;i++)
{
	sum=sum+a[i];
}
printf("the value is:%d\n",sum);
}
