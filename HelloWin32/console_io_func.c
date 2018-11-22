
/*reads a single byte character from input. It is not defined in standard C . getch() is a way to get a user inputted character.
It can be used to hold program execution, but the "holding" is simply a side-effect of its primary purpose, which is to wait until the user enters a character. 
getch is non standard function defined in conio.h.
It holds the output screen until we press any key from the keyboard
getch() function is usually declared before the end of main() function*/
#include<stdio.h>
#include<conio.h>
//char main()
//{
//	char a;
//	printf(" enter any character : ");
//	getch();
//}

/* getche()
Like getch(), this is also a non-standard function present in conio.h. 
It reads a single character from the keyboard and displays immediately on output screen without waiting for enter key.
But when you use DOS shell in Turbo C, double g, i.e., 'gg'*/

//void main()
//{
//	printf("%c\n", getche());
//}