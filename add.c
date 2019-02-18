#include<stdio.h>
main()
{
	int n,sum=0,ans;
	printf("etner value of n:");
	scanf("%d",&n);
	for(;0<n;)
	{
		
		ans=n%10;
		sum=ans+sum;
		n=n/10;
	}
	printf("sum=%d",sum);
}
