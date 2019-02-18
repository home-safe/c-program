#include<stdio.h>
main()
{
	/*int i,a[5],max;
	printf("enter value of an array:\n");
	for(i=0;i<5;i++)
	{
		scanf("%d",&a[i]);
	
	max=a[0];
	for(i=1;i<5;i++)
	{
		if(max<a[i])
			max=a[i];
	}
	printf("The bigger number is:%d",max);
		int i,a[5],max;
	printf("enter value of an array:\n");
	for(i=0;i<5;i++)
	{
		scanf("%d",&a[i]);
	}
	max=a[0];
	for(i=1;i<5;i++)
	{
		if(max>a[i])
			max=a[i];
	}
	printf("The bigger number is:%d",max);
    int i,a[100],j;
	printf("enter value of a[0]");
	scanf("%d",&a[0]);
	printf("enter value of a[1]");
	scanf("%d",&a[1]);
	for(i=0;i<100;i++)
  	   {
	  	for(j=0;j<2;j++)
	  	{
	  	   a[i+2]=a[i]+a[i+1];	
		}
      printf(" %d",a[i]);
      }	
      /*int i,a[4],c,b;
      printf("enter value of an array:\n");
      for(i=0;i<4;i++)
      {
         scanf("%d",&a[i]);
	  }
	for(i=0;i<4;i++)
	{
		b=a[i];
	}
	for(i=3;i>=0;i--)
	{
		c=a[i];
	}
	if(c==b)
	{
		printf("the number is palindrome");
	}
	else
	{
	printf("the number is not palindrome");	
	}*/
    long long n;
    int count = 0;

    printf("Enter an integer: ");
    scanf("%lld", &n);

    while(n != 0)
    {
        n/=10;
        count++;
    }

    printf("Number of digits: %d", count);

	
}
