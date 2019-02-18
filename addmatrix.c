/*#include<stdio.h>
main()
{
	int i,j,a[3][3],b[3][3],c[3][3];
	printf("enter value of A:");
	for(i=0;i<3;i++)
	{
	for(j=0;j<3;j++)
	{
		scanf("%d",&a[i][j]);
	}
	printf("\n");
   }
   printf("enter value of B:");
   for(i=0;i<3;i++)
   {
	for(j=0;j<3;j++)
	{
		scanf("%d",&b[i][j]);
	}
	printf("\n");
   }
   for(i=0;i<3;i++)
   {
	for(j=0;j<3;j++)
	{
		c[i][j]=a[i][j]+b[i][j];
	}
   }
	printf("the matrix addtion is:\n");
	 for(i=0;i<3;i++)
   {
	for(j=0;j<3;j++)
	{
		printf("%d",c[i][j]);
		printf(" ");
	}
	printf("\n");
   }
	
}*/
#include<stdio.h>
main()
{
	int d,e,i,j,a[3][3],b[3][3],c[3][3];
	printf("enter value of matrix A:\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
        {
		scanf("%d",&a[i][j]);
	    }
	    printf("\n");
	}
	printf("enter value of matrix B:\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
        {
		scanf("%d",&b[i][j]);
	    }
	    printf("\n");
	}
	printf("the result of mul matrix is:\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
        {
		 for(d=0;d<=0;d++)
		 {
		 	for(e=0;e<=0;e++)
		 	{
		 		c[i][j]=a[i][d]*b[e][j]+a[i][d+1]*b[e+1][j]+a[i][d+2]*b[e+2][j];
			 }
		 }
		printf("%d",c[i][j]);
		printf("/t ");
	    }
	    printf("\n");
	}
 		
}
