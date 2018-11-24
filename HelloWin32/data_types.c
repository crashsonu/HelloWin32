#include<stdio.h>


void int_typeCast()
/*
	@ Type casting it will convert float value to integer value.
	when u enter an float value but its data type is an integer then it will not consider the value after point, it will consider the float value as integer value.
*/
{
	int a,b;
	b = (int) 4.7;
	printf("%d\n", b);
	a = (int) 4.7 + (int) 4.5;
	printf("%d", a);
}
