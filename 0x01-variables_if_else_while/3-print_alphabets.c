/* program that prints alphabets in different notations */
#include <stdio.h>
/**
 * main-entry point of the code
 * for-loop the printing of the characters
 * putchar- prints the character to the std output
 * Return: 0 when successfully run
 */
int main(void)
{
	int a;
	int A;

	for (a = 'a'; ((a >= 97) && (a <= 122)); a++)
	{
		putchar(a);
	}

	for (A = 'A'; ((A >= 65) && (A <= 90)); A++)
	{
		putchar(A);
	}
	putchar('\n');

	return (0);
}
