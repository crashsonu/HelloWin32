/*
	Get factorial of given number.
*/

#include<stdio.h>

void get_factor()
{
	int i, no, fact=1;
	printf("ennter ur number");
	scanf("%d", &no);
	for ( i = 1; i < no; i++)
	{
		fact = fact*i;

	}
	printf("factorial is %d", fact);
}
