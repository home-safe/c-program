#include<stdio.h>
main()
{
	int a;
	printf("input value of a:");
	scanf("%d",&a);
	if(a%100==0)
	{
		if(a%400!=0)
		{
			printf("a is not leap year");
		}
		else
		{
			printf("a is leap year");
		}
	}
	else
	{
		if(a%4==0)
		{
			printf("a is leap year");
		}
		else
		{
			printf("a is not leap year");
		}
	}
}
