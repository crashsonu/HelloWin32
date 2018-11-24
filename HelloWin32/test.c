#include<stdio.h>

void making_A()
{
	int i, j, x, y,z;
	y = 4;
	for (i = 1; i <= 5; i++)
	{
		for (x = 1; x <= y; x++)
		{
			printf(" ");
		}
		y--;
		for (j = 1; j <= 10; j++)
		{
			for (z = 1; z <= 9; z = z + 2)
			{
				printf(" ");
				if (i == 3 || i == 3 || j == j + 2)
				{
					printf("*");
				}
				else
				{
					printf(" ");
				}
			}
		}
		printf("\n");
	}
}




void hi_the()
{
	int i, j, k, l;

	for (i = 1; i<= 11; i++)
	{

		for (j = 10; j>= i; j--)
		{
			// These is for spaces before every 1st star after new line
			printf(" ");
		}
		
		for (k = 1; k<= 3/*(this will print horizontal value ...no. of columns it changable)*/; k++)
		{
			// this is for left side column
			printf("*");
		}

		for (l = 1; l<= i; l++)
		{
			//this is the middle portion of character ' A '
			if (i> 4 && i<7)
			{
				printf("**");
			}
			else
			{
				printf("  ");//add two space  
			}
		}

		for (k = 1; k<= 3; k++)
		{
			// this is for right side column
			printf("*");
		}


		//for (j = 10; j>= i; j--)
		//{
		//	printf(" ");//add space here 
		//}


		printf("\n");
	}
}

//void main()
//{
//	int i, j, k, l;
//	for (i = 1; i <= 15; i++)
//	{
//		for (j = 9; j <= i; j--)
//		{
//			printf(" ");
//		}
//		for (k = 1; k <= 2; k++)
//		{
//			printf("*");
//		}
//		for (l = 1; l <= i; i++)
//		{
//			if (i == 7)
//			{
//				printf("**");
//			}
//			else
//			{
//				printf(" ");
//			}
//
//		}
//		for (k = 1; k <= 1; k++)
//		{
//			printf("*");
//		}
//
//		for (j = 9; j >= i; j--)
//		{
//			printf(" ");
//		}
//		
//		printf("\n");
//		
//	}
//}



