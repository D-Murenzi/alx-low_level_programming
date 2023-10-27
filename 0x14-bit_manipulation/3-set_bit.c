/* this function sets a bit at index to 1*/
#include <stdio.h>
#include "main.h"

/**
 * set_bit-sets a bit at index to 1
 * @n: the number whose bit to change
 * @index: the index of bit to set to 1
 * Return: 1 on success or -1 on failure
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int b;
	unsigned long int a;

	b = sizeof(long int) * 8;
	if (index > b)
	{
		return (-1);
	}
	a = 1 << index;
	*n = *n | a;
	return (1);
}
