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

	putchar('0' + 0);

	for (i = 1; i < 10; i++)
	{
		putchar(i + ',' + ' ');
	}
	putchar('\b');
	putchar('\n');

	return (0);
}
