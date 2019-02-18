#include<stdio.h>
main()
{
	int a;
    putchar("enter value a:");
    a=getchar();
    switch(a)
    {
    	case'a':
    	case'e':
    	case'i':
    	case'y':
    	case'o':
    	case'u':
    	printf("%c is vowel",a);
    	break;
    	default:
    	printf("%c is charater",a);	
	}

	
}
