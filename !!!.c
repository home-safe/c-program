#include<stdio.h>
main()
{
	int i,n,result=1;8
	printf("enter value of n:");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		result =result*i;
	}
	printf("result=%d",result);
}
