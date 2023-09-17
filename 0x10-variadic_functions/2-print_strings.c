/* this function prints string passed to it*/
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_strings-prints all the numbers passed to it
 * @separator: something to separate the numbers
 * @n: number of the integers passed to the function
 * @...: variable arguments
 * Return: nothing
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list strings;
	char *str;

	va_start(strings, n);
	for (i = 0; i < n; i++)
	{
		str = va_arg(strings, char *);
		if (str == NULL)
		{
			printf("(nil)");
		}
		else
		{
			printf("%s", str);
		}
		if ((separator != NULL) && (i < (n - 1)))
		{
			printf("%s", separator);
		}
	}
	printf("\n");

	va_end(strings);
}
