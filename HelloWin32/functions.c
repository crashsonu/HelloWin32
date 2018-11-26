#include<stdio.h>

int add(int a, int b)
/*
	@ This function will add two values which can be use in any other function.
	Args:-
		a (int): first value
		b (int): second value
	Return:-
		c (int): addition of a and b.
*/
{
	int c;
	c = a + b;
	return c;
}


float div(int a, int b)
/*
	@ This function will divide any two values which can be use in any other function.
*/
{
	// here we in the function we take int value to div function, but still you want to result in float,
	// then you should have to convert type (like integer to float) by cast float to the variables, as i shown in below.
	float d = (float) a / b;
	return d;
}


int sub(int a)
/*
	@ This function will subtract any value by 10 which can be use in any other function.
*/
{
	int g;
	g = a - 10;
	return g;
}


void func_tester_main()
/*
	@ In this functin we can call and test above functions.
*/
{
	int x, y, s, m;
	float j;
	printf("Enter your two number : \n");
	scanf("%d %d", &x, &y);
	s = add(x, y);
	printf("The sum of given values is : %d\n", s);
	m = sub(s);
	printf("The output from the sub function : %d\n", m);
	j = div(x, y);
	printf("The division of the given values is : %f", j);
}


int pyramid_using_func(int row)
/*
	@ In this function we make pyramid using custom values
	costom values= "its a changable value" ,we can pass any values related 
	to its data type while calling function in main function.
	Here we calling i.e. pyramid_using_func() in the function where its costom value is 5;
	it returns..
		*
	   * *
	  * * *
	 * * * *
	* * * * *
*/
{
	int  column_v, i, j, s, k;
	column_v = (int)row * 2 - 1;
	s = (int)row - 1;
	for (i = 1; i <= row; i++)
	{
		for (k = s; k >= 1; k--)
		{
			printf(" ");
		}
		for (j = 1; j <= i; j++)
		{
			printf("* ");
		}
		printf("\n");
		s--;
	}
}


int digit_pyramid_func(int row)
/*
	@ It will print a digit pyramid of given rows.
*/
{
	int i, j, k, l, m = 1;
	j == row;
	k = row - 1;
	for (i = 1; i <= row; i++)
	{
		for (l = k; l >= 1; l--)
		{
			printf(" ");
		}
		for (j = 1; j <= i; j++)
		{
			printf("%d ", m);
		}
		printf("\n");
		k--;
	}
}


int digit_pyramid_func2(int row)
/*
	@ It will print table pyramid of given number.
*/
{
	int i, j, c = 1, d, e, u;
	if (row % 2 != 0)
	{
		printf(" enter row in even number in function to get perfect side pyramid \n");
	}
	d = row / 2;
	e = row * d + d;
	for (i = 1; i <= row; i++)
	{
		for (j = 1; j <= i; j++)
		{
			if (c <= e)
			{
				printf("%d ", c* row);
				c++;
			}
		}
		printf("\n");
	}
}


int simple_table(int my_no)
/*
	@ prints simple table of given number.
*/
{
	int i;

	for (i = 1; i <= 10; i++)
	{
		printf("%d\n", i*my_no);
	}
}
