/* this program is a function that allocates memory using malloc function */
#include<stdio.h>
#include<stdlib.h>
#include"main,h"
/**
 * malloc_checked-allocates memory spaces using malloc
 * @b:the interger value whose size is allocated as memory
 * Return:pointer to the allocated memory on success or 98 on failure
 */

void *malloc_checked(unsigned int b)
{
	void *pointer;

	pointer = malloc(b);
	if (pointer == NULL)
	{
		exit(98);
	}
	return (pointer);
}
