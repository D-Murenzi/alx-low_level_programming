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
	int z;

	for (z = 'z'; ((z >= 97) && (z <= 122)); z--)
	{
		putchar(z);
	}
	putchar('\n');

	return (0);
}
