/* this  hey program allocates memory for an array*/
#include <string.h>
#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _calloc-allocates memory for an array
 * @nmemb:number of elements that makes the array
 * @size:the actual size of input element, each
 * Return:pointer to the allocated memory
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *a;
	unsigned int i;

	if ((nmemb == 0) || (size == 0))
	{
		return (NULL);
	}
	a = malloc(nmemb * size);
	if (a == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < (nmemb * size); i++)
	{
		((char *)a)[i] = 0;
	}
	return (a);
}
