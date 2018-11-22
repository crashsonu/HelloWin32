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
