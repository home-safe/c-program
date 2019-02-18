#include<stdio.h>
ponler()
{
char name[21],address[31];
puts("enter your name:");
gets(name);
fflush(stdin);
puts("enter your address:");
gets(address);
fflush(stdin);
puts("your address is:");
puts(address);
puts("your name is:");
puts(name);
}
main()
{
	ponler();
}


