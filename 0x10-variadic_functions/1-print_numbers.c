/* this function prints numbers passed to it */
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_numbers-prints all the numbers passed to it
 * @separator: something to separate the numbers
 * @n: number of the integers passed to the function
 * @...: variable arguments
 * Return: nothing
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list numbers;

	va_start(numbers, n);
	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(numbers, int));
		if (separator != NULL)
		{
			printf("%s", separator);
		}
	}
	printf("\n");

	va_end(numbers);
}
