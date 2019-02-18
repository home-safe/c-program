#include<stdio.h>
main()
{
	char name[21],address[31];
	puts("enter your name");
	gets(name);
	fflush(stdin);
	puts("enter your address");
	gets(address);
	fflush(stdin);
	puts("your name is:");
	puts(name);
	puts("your address is:");
	puts(address);	
	
}
