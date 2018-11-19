/*
This code will get you the grades according to your marks.
in this file you will learn following points.
	1. conditions (if, else if, else).
	2. operators (&&, ||, ==, >, <, <=, >=).
*/

#include<stdio.h>

void get_grades()
{
	int marks;
	printf("Enter your marks : ");
	scanf("%d", &marks);
	if (marks >40 && marks<60)
	{
		printf(" The student is pass .... by getting c grade");
	}
	else if (marks > 60 && marks<80)
	{
		printf(" Student is pass .... by getting B grade");
	}
	else if (marks > 80 && marks <100)
	{
		printf(" student is pass... by gating A grade");
	}
	else if (marks == 100)
	{
		printf(" Congrats..!! You got out of marks");
	}
	else if (marks > 100 || marks<0)
	{
		printf(" You entered wrong value");
	}
	else
	{
		printf(" student is fail, better luck next time");
	}
}

