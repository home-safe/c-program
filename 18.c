//#include<stdio.h>
//int main()
//{
//	char name[30],ch;
//	int i=0;
//	printf("entr your name:");
//	while(ch!='\n')
//	{
//		scanf("%c",&ch);
//		name[i]=ch;
//		i++;
//	}
//	name[i]='\n';//insering null character at end 
//	printf("Name:%s",name);
//	return 0;
//}
//This process to take string is tedious .there 
//#include<stdio.h>
//int main()
//{
//	char name[30];
//	printf("enter name:");
//	gets(name);
//	puts(name);
//	return 0;
//}
#include<stdio.h>
void Display(char ch[]);
int main()
{
	char c[50];
	printf("enter string:");
	gets(c);
	Display(c);
	return 0;
}
void Display(char ch[])
{
	printf("string output:");
	puts(ch);
}
