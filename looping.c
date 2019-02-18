#include<stdio.h>
main()
{
	int i,mul=1,n;
	printf("enter value of n:");
	scanf("%d",&n);
	for(i=1;i<=10;i++)
	{
		mul=n*i;
		printf("%d*%d=%d\n",n,i,mul);
	}
}
