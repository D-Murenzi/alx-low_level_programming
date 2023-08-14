/* this prog prints numbers */
#include <stdio.h>
/**
 * main-entrypoint
 * for-loops the printing
 * printf-prints to stdo
 *Return: 0 for success
 */
int main(void)
{
	int n;

	for (n = '0'; (n >= 48) && (n <= 57) ; n++)
	{
		putchar(n);
	}
	putchar('\n');

	return (0);

}
