#include<stdio.h>
main()
{
	int i=1,n,sum=0;
	printf("enter value of n:");
	scanf("%d",&n);
   do
	{
		sum=n+i;
		i++;
	}	while(i<=n);
	printf("the sum is %d",sum);
}

