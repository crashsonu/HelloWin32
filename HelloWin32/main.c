/*
All function can be called in main function of this file.
main file.
*/
//
#include<stdio.h>

void main()
{
	//	// makePiramid(12);
	//	// e_making(7, 3);
	//	// dynamicPiramid(11);
	//	//int_typeCast();
	//	my_loop();
	digit_pyramid_func2(11);
	
}



int pyramid_using_func(int row)
{
	int  column_v,i,j,s,k;
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


int my_p(int v1)
{
	int i, j,s,k;
	s = v1-1;
	for (i = 1; i <= v1; i++)
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

{
	int i, j, k, l,m=1;
	j ==row;
	k = row - 1;
	for (i = 1; i <= row; i++)
	{
		for (l = k; l >= 1; l--)
		{
			printf(" ");
		}
		for (j = 1; j <= i; j++)
		{
			printf("%d ",m);
		}
		
		printf("\n");
		k--;
	}
}


int digit_pyramid_func2(int row)
{
	int i, j, c=1, d,e,u ;
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


int padha(int my_no)
{
	int i;

	for (i = 1; i <= 10; i++)
	{
		printf("%d\n", i*my_no);
	}
}