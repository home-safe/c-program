#include<stdio.h>
static int i;
int sum()
{
	static int a=10,b=20;
	printf("%d %d\n",a,b);
	a++;
	b++;
}
void main()
{
	for(i=0;i<3;i++)
	{
	 sum();
	}
}
