/* this function prints a binary representation of a given number*/
#include <stdio.h>
#include "main.h"
#include <stdlib.h>

/**
 * print_binary-prints the bit representation of a number
 * @n: the long integer to present its binary
 * Return: nothing
 */

void print_binary(unsigned long int n)
{
	if (n > 1)
	{
		unsigned long int b;
		
		n = n >> 1;
		b = n & 1;
		print_binary(n);
		_putchar(b + '0');
	}
	_putchar(n + '0');
}
/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
	print_binary(0);
	printf("\n");
	print_binary(1);
	printf("\n");
	print_binary(3);
	printf("\n");
	print_binary(4);
	printf("\n");
	print_binary((1 << 10) + 1);
	printf("\n");
	return (0);
}
