/* this function determines the number of bits that need to be*/
/*shifted to get another number*/
#include <stdio.h>
#include "main.h"

/**
 * flip_bits-finds number of bit to filt to get another number
 * @n: the first number
 * @m: the second number
 * Return: the number of bits to flip
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int a, b, c;

	c = 0;
	while ((n > 0) || (m > 0))
	{
		a = n & 1;
		b = m & 1;
		if (a != b)
		{
			c++;
		}
		n = n >> 1;
		m = m >> 1;
	}
	return (c);
}
