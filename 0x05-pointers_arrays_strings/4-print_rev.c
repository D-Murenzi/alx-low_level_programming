/* this function prints a string in reverse and newline */
#include "main.h"

/**
 * print_rev-reverses the string
 * @*s: is string input
 * Return: nothing
 */

void print_rev(char *s)
{
	int n = _strlen(s);

	while (n > 0)
	{
		putchar(*(s + (n - 1)));
		n--;
	}
	putchar('\n');
}
