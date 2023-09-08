/* this program allocates memory for an array*/
#include <string.h>
#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * custom_memset-set a certain memory to assignedvalue
 * @dest:void pointer to the memory to manupulate
 * @c:the value to set at the mem
 * @n:number of bytes to set
 * Return:pointer to the memory
 */

void *custom_memset(void *dest, int c, size_t n)
{
	unsigned char *ptr = dest;
	unsigned char uc = (unsigned char)c;

	while (n > 0)
	{
		*ptr++ = uc;
		n--;
	}
	return (dest);
}
/**
 * _calloc-allocates memory for an array
 * @nmemb:number of elements that makes the array
 * @size:the actual size of input element, each
 * Return:pointer to the allocated memory
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *a;
	unsigned int b;

	if ((nmemb == 0) || (size == 0))
	{
		return (NULL);
	}
	a = malloc(nmemb * size);
	if (a == NULL)
	{
		return (NULL);
	}
	custom_memset(a, 0, nmemb);
	return (a);
}
