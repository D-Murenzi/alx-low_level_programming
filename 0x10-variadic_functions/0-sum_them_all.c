/* this program is about a function that calculates the sum of its input arg*/

#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * sum_them_all-calculate the sum of the inputs
 * @n:number of inputs
 * @...: variable number of inputs
 * Return: interger sum
 */

int sum_them_all(const unsigned int n, ...)
{
	int i;
	int total;
	va_list inputs;

	va_start(inputs, n);
	total = 0;
	i = 0;
	for (i = 0; i < n; i++)
	{
		total += va_arg(inputs, int);
	}
	va_end(inputs);

	return (total);
}
