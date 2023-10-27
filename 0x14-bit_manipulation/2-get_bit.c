/* this function returns the value of a bit at certain index*/
#include <stdio.h>
#include "main.h"
#include <limits.h>

/**
 * get_bit-returns avalue of a bit at index
 * @n: the number in which to search for a bit
 * @index: the index to grab the bit
 * Return: the bit at index
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int b;
	int a;

	b = sizeof(long int) * 8;
	if (index > b)
	{
		return (0);
	}
	a = n >> index;
	return (a & 1);
}
