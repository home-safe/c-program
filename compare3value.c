#include<stdio.h>
main()
{
	int var1,var2,var3;
	printf("input valu of var1:");
	scanf("%d",&var1);
	printf("input valu of var2:");
	scanf("%d",&var2);
	printf("input valu of var3:");
	scanf("%d",&var3);	
    if(var1>var2)
    {
    	if(var1>var3)
    	printf("var1 is greater");
    	else
    	printf("var3 is greater");
	}
	else
	{
		if(var2>var3)
		printf("var2 is greater");
		else
		printf("var3 is greater");
	}
	
}
