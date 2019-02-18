#include<stdio.h>
main()
{
	int i,n,sum=0;
	for(i=1;i<=10;i++)
	{
   	printf("enter value of n:");
	scanf("%d",&n);
    }
	/*for(i=0;i<=n;i++)
	{
		if(i%2==1)
		continue;
		sum=sum+i;
		
	}
	printf("the sum of even number is %d",sum);*/
	for(i=0;i<=10;i++)
	{
		if(n<0)
		continue;
		sum=sum+n;
	}
	printf("the sum of even number is %d",sum);
}
