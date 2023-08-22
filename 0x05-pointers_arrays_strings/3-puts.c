/* this function prints the string to stdout*/
#include "main.h"
/**
 * _puts- prints a string to std ou
 * @str: this is string input
 * Return: void
 */

void _puts(char *str)
{
	while (*str != '\0')
	{
		putchar(*str);
		str++;
	}
	putchar('\n');
}
