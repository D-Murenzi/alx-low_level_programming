/* this function prints a binary representation of a given number*/
#include <stdio.h>
#include "main.h"
#include <limits.h>

/**
 * print_binary-prints the bit representation of a number
 * @n: the long integer to present its binary
 * Return: nothing
 */

void print_binary(unsigned long int n)
{
	if (n > 0)
	{
		unsigned long int b;
		int c;

		if (n > ULONG_MAX)
		{
			return;
		}
		b = n;
		c = -1;
		while (b > 0)
		{
			c++;
			b = b >> 1;
		}
		while (c >= 0)
		{
			if (((1 << c) & n) > 0)
		{
			putchar(1 + '0');
		}
			else
			{
				putchar('0');
			}
			c--;
		}
	}
	else
	{
		putchar('0');
	}
}
