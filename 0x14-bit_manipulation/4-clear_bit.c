/* this function seta a bit at index to 0*/
#include <stdio.h>
#include "main.h"

/**
 * clear_bit-sets abit at index to 0
 * @n: the integer to change
 * @index: the bit to set to 0
 * Return: 1 on success and -1 on failure
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int b;
	unsigned long int a;

	b = sizeof(long int) * 8;
	if (index > b)
	{
		return (-1);
	}
	a = 1 << index;
	*n = *n ^ a;
	return (1);
}
