/*
For Loop Examples.
started learning for loop examples.
*/

#include<stdio.h>

void simpleForLoop()
/*
	@ Create Simple for loop.
*/
{
	int i;
	for (i=0; i<=5; i++)
	{
		printf("%d\n", i);
	}
}


void incrementalLoop()
/*
	@ Make increamental loop to print output like this.
	*
	* *
	* * *
	* * * *
	* * * * *
*/
{
	int i, j;
	for (i = 1; i <= 5; i++)
	{
		for (j = 1; j <= i; j++)
		{
			printf("* ");
		}
		printf("\n");
	}
}


void decrementalLoop()
/*
	@ Make decremental loop to print output like this.
	* * * * *
	* * * *
	* * *
	* *
	*
*/
{
	int i, j;
	for (i = 5; i >0 ; --i)
	{
		for (j = i; j > 0; --j)
		{
			printf("* ");
		}
	printf("\n");
	}
}


void simplePiramid()
/*
	@ it will print piramid structure using default values.
		*
	   * *
	  * * *
	 * * * *
	* * * * *
*/
{
	int i, j, a, b;
	b = 4;
	for (i = 1; i <= 5; i++)
	{
		for (a = 1; a <= b; a++)
		{
			printf(" ");
		}
		b--;
		for (j = 1; j <= i; j++)
		{
			printf("* ");
		}
		printf("\n");
	}
}


void sidePiramid()
/*
	@ it will print side piramid which looks like bellow.
	*
	* *
	* * *
	* * * *
	* * *
	* *
	*
*/
{
	int i, j, x;
	x = 3;
	for (i = 1; i <= 7; i++)
	{
		if (i <= 4)
		{
			for (j = 1; j <= i; j++)
			{
				printf("* ");
			}
		}
		else
		{
			for (j = x; j >= 1; j--)
			{
				printf("* ");
			}
			x--;
		}
		printf("\n");
	}
}


void printEvenNumberMethod1()
/*
	@ Printing even numbers using if else method.
*/
{
	int i;
	for (i = 0; i <= 100; i++)
	{
		if (i % 2 == 0)
		{
			printf("%d", i);
		}
		else
		{
			printf(" ");
		}
	}
}


void printEvenNumberMethod2()
/*
	@ Printing even numbers using for loop with 2 step increment.
*/
{
	for (int i = 2; i <= 100; i = i + 2)
	{
		printf("%d\n", i);
	}
}


void startFilledSquare()
/*
	@ it wiil print output like this.
	* * * * *
	* * * * *
	* * * * *
	* * * * *
	* * * * *
*/
{
	int i, j;
	for (i = 1; i <= 5; i++)
	{
		for (j = 1; j <= 5; j++)
		{
			printf("* ");
		}
		printf("\n");
	}
}


void hollowSquare()
/*
	@ this program will print hollow square star pattern, it will look like bellow.
	* * * * *
	*       *
	*       *
	*       *
	* * * * *
*/
{
	int i, j;
	for (i = 1; i <= 5; i++)
	{
		for (j = 1; j <= 5; j++)
		{
			if (i == 1 || i == 5 || j == 1 || j == 5)
			{
				printf("* ");
			}
			else
			{
				printf(" ");
			}
		}
		printf("\n");
	}
}


void oddDesign()
/*
	@ it will print design looks like this.
	*****
	** **
	* * *
	** **
	*****
*/
{
	int i, j;
	for (i = 1; i <= 5; i++)
	{
		for (j = 1; j <= 5; j++)
		{
			if (i == 1 || i == 5 || j == 1 || j == 5 || j == 5 - i + 1 || j == 5 - i - 1 || i == j)
			{
				printf("*");
			}
			else
			{
				printf(" ");
			}
		}
		printf("\n");
	}
}


void dynamicPiramid(int baseValue)
/*
	@ This function will make piramid using given value.
		  *
		 * *
		* * *
	   * * * *
	  * * * * *
	 * * * * * *
	* * * * * * *
	Args:-
		baseValue (int): enter number of piramid size.
	Return:-
		None.
*/
{
	int i, j, x, z, a;
	z = baseValue - 1;
	a = baseValue;
	if (a % 2 == 0)
	{
		printf("Sorry...! You enetered even value plz enter odd value for pyramid\n");
		return;
	}
	for (i = 1; i <= baseValue; i++)
	{
		// this for loop for the spaces before the first star.
		for (x = z; x >= 1; x--)
		{
			printf(" ");
		}
		// To decrease spaces value frm 4 to 0; this is defined out of loop becouse it should not be refreshed everytime.
		z--;

		// This for loop to print stars.
		for (j = 1; j <= i; j++)
		{
			printf("* ");
		}
		printf("\n");
	}
}


void e_character_pattern(int vValue, int hValue)
/*
	@this function will design the "E" in the star pattern which is looks like bellow.
	* * *
	*
	*
	* * *
	*
	*
	* * *
*/
{
	int i, j;
	int newVal = (float)vValue / 2 + 0.5;
	for (i = 1; i <= vValue; i++)
	{
		for (j = 1; j <= hValue; j++)
		{
			if (i == 1 || i == newVal || i == vValue || j == 1)
			{
				printf("* ");
			}
		}
		printf("\n");
	}
}


int print_alphabts()
/*
	@ it will return alphabets between A-Z
	A B C D E F G H I J K L M N O P Q R S T U V W X Y Z
*/
{
	char b;
	for (b = 'A'; b <= 'Z'; b++)
	{
		printf("%c ", b);
	}
}


int print_alphabts1()
/*
	 @ This is the second way to write alphabets by ASCII no. given to uppercase alphbets ...it will return
	 A B C D E F G H I J K L M N O P Q R S T U V W X Y Z
*/
{
	int i;
	for (i = 65; i <= 90; i++)
	{
		printf("%c ", i);
	}
}


int print_alpha()
/*
	@ it will return
	A
	AB
	ABC
	ABCD
	ABCDE
	ABCDEF
*/
{
	int i, j;
	char ch = 'A';
	for (i = 1; i <= 6; i++)
	{
		for (j = 1; j <= i; j++)
		{
			printf("%c", ch);
			ch++;
		}
		ch = 'A';
		printf("\n");
	}
}


int print_alpha2()
/*
	@ It will return
	A
	BB
	CCC
	DDDD
	EEEEE
*/
{
	int i, j;
	char ch = 'A';
	for (i = 1; i <= 5; i++)
	{
		for (j = 1; j <= i; j++)
		{
			printf("%c", ch);
		}
		ch++;
		printf("\n");
	}
}


int print_alpha3()
/*
	@ It will return
	A
	BC
	DEF
	GHIJ
	KLMNO
*/
{
	int i, j, a = 65; // cause by ASCII( American Standard Code for Information Interchange) values of characters defined..  
					// for uppercase char is A--Z= 65-90 & lowercase char is a--z= 97-122.
	for (i = 1; i <= 5; i++)
	{
		for (j = 1; j <= i; j++)
		{
			printf("%c", a);
			a++;
		}
		printf("\n");
	}
}


int print_int()
/*
	@ this will return
	1
	12
	123
	1234
	12345
	123456
	1234567
	12345678
	123456789
	12345678910
*/
{
	int i, j, b = 1;
	for (i = 1; i <= 10; i++)
	{
		for (j = 1; j <= i; j++)
		{
			printf("%d", b);
			b++;
		}
		b = 1;
		printf("\n");
	}
}


int print_int2()
/*
	@ this will return
	1
	22
	333
	4444
	55555
*/
{
	int i, j, b = 1;
	for (i = 1; i <= 5; i++)
	{
		for (j = 1; j <= i; j++)
		{
			printf("%d", b);
		}
		b++;
		printf("\n");
	}
}


void print_int2_1()
/*
	@ this will return
	55555
	4444
	333
	22
	1
*/
{
	int i, j, b = 5;
	for (i = 5; i >= 1; i--)
	{
		for (j = 1; j <= i; j++)
		{
			printf("%d", b);
		}
		b--;
		printf("\n");
	}
}


int print_int3()
/*
	@ this will return
	1
	2 3
	4 5 6
	7 8 9 10
	11 12 13 14 15
	16 17 18 19 20 21
	22 23 24 25 26 27 28
	29 30 31 32 33 34 35 36
*/
{
	int i, j, b = 1;
	for (i = 1; i <= 8; i++)
	{
		for (j = 1; j <= i; j++)
		{
			printf("%d ", b);
			b++;
		}
		printf("\n");
	}
}


int print_int3_1()
/*
	@ This will print as function print_int3 bt when u hace limit of values we can use the it statement....pgm will return
	1
	2 3
	4 5 6
	7 8 9 10
	11 12 13 14 15
*/
{
	int i, j, b = 1;
	for (i = 1; i <= 8; i++)
	{
		for (j = 1; j <= i; j++)
		{
			if (b >= 1 && b <= 15)
			{
				printf("%d ", b);
				b++;
			}
		}
		printf("\n");
	}
}


int print_int_pyramid()
/*
	@ It will return pyramid {note that if we dont want refresh the value print it below at last after printf}
			1
		   2 2
		  3 3 3
		 4 4 4 4
		5 5 5 5 5
	   6 6 6 6 6 6
	  7 7 7 7 7 7 7
	 8 8 8 8 8 8 8 8
	9 9 9 9 9 9 9 9 9
*/
{
	int i, j, a, b = 1;
	int c = 8;
	for (i = 1; i <= 9; i++)
	{
		for (j = c; j >= 1; j--)
		{
			printf(" ");
		}

		for (a = 1; a <= i; a++)
		{
			printf("%d ", b);
		}
		b++;
		printf("\n");
		// note that if we dont want refresh the value print it below at last after printf.
		c--;
	}
}


int print_1_100_num()
/*
	@ print 1 to 100 numbers.
*/
{
	int i;
	for (i = 1; i <= 100; i++)
	{
		printf("%d ", i);
	}
}
