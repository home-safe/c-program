#include<stdio.h>
main()
{
	char name_em[20],grade;
	int em_id;
	float salary_em,basicsalary;
	printf("enter name_em:");
	gets(name_em);
	fflush(stdin);
	printf("enter em_id:");
	scanf("%d",&em_id);
	printf("enter basicsalary:");
	scanf("%f",&basicsalary);
	printf("enter jop grade:");
	fflush(stdin);
	grade=getchar();
	if (grade=='A')
	{
		salary_em=basicsalary + (5*basicsalary)/100;
		printf("salary_em=%0.2f",salary_em);
	}
	else if (grade=='B')
	{
		salary_em=(basicsalary + (10*basicsalary)/100);
		printf("salary_em=%0.2f",salary_em);	
	}
		else if (grade=='C')
	{
		salary_em=(basicsalary + (12*basicsalary)/100);
		printf("salary_em=%0.2f",salary_em);
	}
		else if (grade=='D')
	{
		salary_em=(basicsalary + (10*basicsalary)/100);
		printf("salary_em=%0.2f",salary_em);
	}
}
