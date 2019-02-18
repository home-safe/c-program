#include<stdio.h>
	int main()
	{
	int a = 5;
	int b = 5;
	printf("Value of a:%d and b: %d\n",a,b);
	a +=b;// a=a+b;
	printf("Value of a: %d\n",a);
	b %=3; //b=b%3
	printf("Value of b: %d\n",b);
	b*=a+1;// b=b*(a+1)
	printf("Value of b: %d",b);
	b /=a-1;// b=b/(a-1)
	printf("Value of b: %d\n",b);
		
		return (0);
}
