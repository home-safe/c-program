#include<stdio.h>
//int add(int a,int b);
//int main()
//{
//	int num1,num2,sum;
//	printf("enter two num to add:\n");
//	scanf("%d%d",&num1,&num2);
//	sum=add(num1,num2);
//	printf("%d",sum);
//	return 0;
//}
//int add(int a,int b)
//{
//	int add;
//	add=a+b;
//	return add;
//}
main()
{
	int i,n,flag=0;
	printf("inter value of n:");
	scanf("%d",&n);
	for(i=2;i<n/2;i++)
	{
		if(n%i==0)
		{
			flag=1;
			break;
		}
	}
	if(flag==1)
	{
		printf("the number is not prime number\n");
	}
	else
	{
		printf("the number is prime number\n");
	}
}
