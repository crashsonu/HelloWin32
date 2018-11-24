#include<stdio.h>

int add(int a, int b)
/*
	@ This function will add two values which can be use in any other function.
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
