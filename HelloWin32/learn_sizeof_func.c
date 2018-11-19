/*
Detail explanation about c sizeof function.

NEED:-
Many programs must know the storage size of a particular datatype. Though for any given implementation of C or C++
the size of a particular datatype is constant, the sizes of even primitive types in C and C++ may be defined differently
for different platforms of implementation. For example, runtime allocation of array space may use the following code,
in which the sizeof operator is applied to the cast of the type int:

USE:-
The sizeof operator computes the required memory storage space of its operand. The operand is written following the keyword sizeof
and may be the symbol of a storage space, e.g., a variable, type name, or an expression. If it is a type name, it must be enclosed
in parentheses. The result of the operation is the size of the operand in bytes, or the size of the memory representation.
For expressions it evaluates to the representation size for the type that would result from evaluation of the expression,
which is not performed.
For example:-
since
sizeof (char) is defined to be 1[1],
sizeof (int) is defined to be 4[1],
sizeof (float) is defined to be 4[1],
sizeof (double) is defined to be 8[1],

RESOURCE:-
https://en.wikipedia.org/wiki/Sizeof
*/

#include<stdio.h>

void learn_size_of_func()
{
	int my_array[] = { 1,2,3,4,5,6,7,8,9 };
	printf("The element in my array = %d\n", sizeof(my_array)/sizeof(int));
	char my_name[] = "sonali";
	printf("size of my name= %d\n", sizeof(my_name)-1);
	printf("-----------------------------------------------\n");
	printf("size of char = %d\n", sizeof(char));
	printf("size of int = %d\n", sizeof(int));
	printf("size of float = %d\n", sizeof(float));
	printf("size of double = %d\n", sizeof(double));
	printf("size of long double = %d\n", sizeof(long double));
}
