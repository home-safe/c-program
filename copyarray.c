#include<stdio.h>
main()
{
	int i,a[5];
	printf("enter the value of an array:\n");
	for(i=0;i<5;i++)
	{
		scanf("%d",&a[i]);
	}
	
	printf("the zin array is:");
	for(i=0;i<5;i++)
	{
	printf("%d",a[i]);
    }
    printf("\n");
    printf("the copy array is:");
	for(i=0;i<5;i++)
	{
	printf("%d",a[i]);
    }
}
