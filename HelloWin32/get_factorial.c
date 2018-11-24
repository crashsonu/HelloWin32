/*
	Get factorial of given number.
	for eg. factorial of 6 = 6*5*4*3*2*1 = 720
*/

#include<stdio.h>

int get_factor()
/*
	@ to get factorial number run this function.
*/
{
	int i, no, fact = 1;
	printf("ennter ur number ");
	scanf("%d", &no);
	for (i = 1; i <= no; i++)
		fact = fact * i;

	printf("Factorial of %d = %d\n", no, fact);
}
