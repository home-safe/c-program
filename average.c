#include<stdio.h>
main()
{
	int i,a[4],sum=0,average;
	printf("enter value of an array:");
	for(i=1;i<=4;i++)
	{
		scanf("%d",&a[i]);
	}
	/*printf("value of a:%d\n",a[i]);*/
	for(i=1;i<=4;i++)
	{
		sum=sum+a[i];
		average=sum/4;
		
	}
	
	printf("the average is:%d",average);
}
