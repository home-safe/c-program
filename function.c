/*#include<stdio.h>
int add(int a,int b);
int main()
{
int num1,num2,sum;
	printf("input value of num:");
	scanf("%d%d",&num1,&num2);
	sum=add(num1,num2);//fun calling
	printf("%d",sum);
	return 0;
		
}
int add(int a,int b)//function deffinition
{
/*start for function deffinition
int add;
add=a+b;
return add;  //return stetement of function	
}

//funcdtion declarator is a part of function deffination*/
#include <stdio.h>
int sum(int n);
int main()
{
    int num,add;
    printf("Enter a positive integer:"); 
	scanf("%d",&num);
    add=sum(num);
    printf("sum=%d",add);
}
int sum(int n)
{
    if(n==0) 
	return n;
    return n+sum(n-1);    /*self call  to function sum() */
}




