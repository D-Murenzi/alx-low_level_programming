/* program that combines numbers */
#include <stdio.h>
/**
 * main-an intro point
 * putchar-prints to the stdo
 * for-creates a loop
 * Return:0 for success
 */
int main(void)
{
	int i;

	for (i = '0'; ((i >= 48) && (i <= 57)); i++)
	{
		putchar(i);
		putchar(',');
		putchar(' ');
	}
	putchar('\n');

	return (0);
}
