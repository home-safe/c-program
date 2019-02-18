#include<stdio.h>
main()
{
  int var1,var2,var3;
  printf("input value of var1\n");
  scanf("%d",&var1);
  printf("input value of var2\n");
  scanf("%d",&var2);
  printf("input value of var3\n");
  scanf("%d",&var3);
    if(var1==var2&&var1==var3&&var2==var3)
    printf("var1 equal var2 equal var3\n");
      else if(var1>var2&&var1>var3&&var2>var3)
      printf("var1 biger then var2 bigger than var3");
      else if(var1>var2&&var1>var3&&var3>var2)
      printf("var1 biger then var3 bigger than var2");
      else if(var2>var1&&var2>var3&&var1>var3)
      printf("var2 biger then var1 bigger than var3");
      else if(var2>var1&&var2>var3&&var3>var1)
      printf("var2 biger then var3 bigger than var1");
      else if(var3>var2&&var3>var1&&var1>var2)
      printf("var3 biger then var1 bigger than var2");
      else if(var3>var2&&var3>var1&&var2>var1)
      printf("var3 biger then var2 bigger than var1");
      else if(var1==var2&&var1>var3&&var2>var3)
      printf("var1 equal var2 bigger than var3");
	  else if(var1>var2&&var1==var3&&var3>var2)
      printf("var1 equal var3 bigger than var2");
	  else if(var2>var1&&var2==var3&&var3>var1)
      printf("var2 equal var3 bigger than var1");
      
}
