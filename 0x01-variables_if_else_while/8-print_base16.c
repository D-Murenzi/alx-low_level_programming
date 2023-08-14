/* this progarm prints all numbers in base 16 in lowercase */
#include <stdio.h>
/**
 * main-anentry point
 * for-is a loop to check the numbers
 * if-sets conditions
 * putchar-prints to the stdo
 * Return: 0 is successfully run
 */
int main(void)
{
	int i;

	for (i = 0; i < 16; i++)
	{
		if (i < 10)
		{
			putchar('0' + i);
		}
		else
		{
			putchar('a' + (i - 10));
		}
	}

	putchar('\n');

	return (0);
}
