/* this function returns the value of a bit at certain index*/
#include <stdio.h>
#include "main.h"

/**
 * get_bit-returns avalue of a bit at index
 * @n: the number in which to search for a bit
 * @index: the index to grab the bit
 * Return: the bit at index
 */

int get_bit(unsigned long int n, unsigned int index)
{
	int a;

	a = n >> index;
	return (a & 1);
}
