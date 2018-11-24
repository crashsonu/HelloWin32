#include<stdio.h>


int print_alpha_x()
/*
	@ Print char x. output should be like below.
	*       *
	 *     *
	  *   *
	   * *
	    *
	   * *
	  *   *
	 *     *
	*       *
 
*/
{
	int i, j, l, k = 1;
	for (i = 1; i <= 9; i++)
	{
		for (j = 1; j <= i; j++)
		{
			if (i == j)
			{
				printf("*");
			}
			else
			{
				printf(" ");
			}
		}
		printf("\n");
		/*printf("\n");
		for (i = 9; i >= 1; i--)
		{
			for (j = 9; j == i; j--)
			{
				if (i == j)
				{
					printf("*");
				}
				else
				{
					printf(" ");
				}
			}
			printf("\n");
		}*/
	}
}