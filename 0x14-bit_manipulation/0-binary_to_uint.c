/* this function converts a binary number into an unsigned integer*/

#include <stdio.h>
#include "main.h"

/**
 * power-calculates the power of numbers
 * @base: the base number
 * @exponent: the power to raise the base to
 * Return: the result of power
*/

double power(double base, int exponent)
{
	double result = base;
	int i;

	if (exponent == 0)
	{
		return (1.0);
	}
	for (i = 1; i < exponent; i++)
	{
		result *= base;
	}
	return (result);
}

/**
 * binary_to_uint-converts binary to unsigned int
 * @b: pointer to the binary number to be converted
 * Return: the unsigned int equivalent of the binary
 */

unsigned int binary_to_uint(const char *b)
{
	char *ptr;
	unsigned int a, c, d;

	if (b == NULL)
	{
		return (0);
	}
	ptr = (char *)b;
	a = 0;
	while (*ptr != '\0')
	{
		if ((*ptr != '0') && (*ptr != '1'))
		{
			return (0);
		}
		a++;
		ptr++;
	}
	c = 0;
	ptr = (char *)b;
	d = 0;
	a = a - 1;
	while (*ptr != '\0')
	{
		if (*ptr == '1')
		{
			c = c + power(2, (a - d));
		}
		d++;
		ptr++;
	}
	return (c);
}
