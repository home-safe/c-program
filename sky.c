#include<stdio.h>
main()
{
	/*int i,j,a;
   for(i=0;i<=5;i++)
   {
   	for(j=0;j<i;j++)
   	{
   	printf("*");	
	}
	printf("\n");
   }
   int i,j;
   for(i=0;i<=5;i++)
   {
   	for(j=5;j>i;j--)
   	{
   	printf("*");	
	}
	printf("\n");
   }
   for(i=0;i<=5;i++)
   {
   	for(j=5;j>i;j--)
   	{
   	  printf(" ");	
	}
	for(a=0;a<i;a++)
   	{
   	  printf("*");	
	}
	printf("\n");
   }
      for(i=0;i<=5;i++)
   {
   	for(j=0;j<i;j++)
   	{
   	  printf(" ");	
	}
	for(a=5;a>i;a--)
   	{
   	  printf("*");	
	}
	printf("\n");
   }*/
   int i,j,a,n,k;
   printf("Input number of n: ");
   scanf("%d",&n);
   a=n+4-1;
   for(i=1;i<=n;i++)
   {
         for(k=a;k>=1;k--)
            {
              printf(" ");
            }
                      
	   for(j=1;j<=i;j++)
	   printf("* ");
	printf("\n");
    a--;
   }
}

