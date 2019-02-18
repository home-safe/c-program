#include<stdio.h>
main()
{
	char name[26];
	puts("enter your name");
	gets(name);
	fflush(stdin);
	printf("Hello. how are you?");
	puts(name);
}
