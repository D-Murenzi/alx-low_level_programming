/* this is a function that assigns a constant byte on a memory pointed */
#include "main.h"
/**
 * _memset-this sets a constant to a pointed memory adress
 * @s: is pointer to the address
 * @b: is a constant to be filled on the adress
 * @n: number of first bytes to be filled with the constant
 * Return: pointer to the address
 */
char *_memset(char *s, char b, unsigned int n)
{
	char b;
	char *s;
	unsigned int n;
	char *c;
	char *original;

	original = s;
	c = s + n;
	b = 0;
	while (s < c)
	{
		*s = b;
		s++;
	}
	return (original);
}
