#include<stdio.h>
main()
{
	
  int var1, var2;
  printf("input value of var1\n");
  scanf("%d",&var1);
  printf("input value of var2\n");
  scanf("%d",&var2);
  if(var1!=var2)
  {
  	printf("nvar1 is not equal to var2\n");
  if (var1>var2)
  {
  	printf("var1 is greater than var2\n");
	}
 else
	{
		printf("var2 greater than var1\n");
	 } 
 }
  else
  {
  	printf("var1 is equal to var2\n");
  }
}
