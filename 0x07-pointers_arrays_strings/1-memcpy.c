/*this is a function that copies memory area to a new one */
#include "main.h"
/**
 * _memcpy-copies adress area till n integers
 * @dest: pointer to the receiver adress
 * @src: pointer to the area to be copied
 * @n: number of bytes to be copied
 * Return: pointer to the recever adress area
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *original;
	char *c;

	original = dest;
	c = src + n;
	while (src < c)
	{
		*dest = *src;
		dest++;
		src++;
	}
	return (original);
}
