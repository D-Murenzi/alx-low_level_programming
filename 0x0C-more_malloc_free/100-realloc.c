/* this program contains a function that re allocates a previously allocated*/
/*memory to new size */
#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _realloc-reallocates the memory to new siezs
 * @ptr:pointer to the mem to be allocate
 * @old_size:siez of mem to be changed
 * @new_size:size of new mem
 * Return:pointer to the new mem or null on undefined case or failure
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *ptr1;
	unsigned int a;

	if (new_size == old_size)
	{
		return (ptr);
	}
	if (ptr == NULL)
	{
		ptr1 = malloc(new_size);
		return (ptr1);
	}
	if ((ptr != NULL) && (new_size == 0))
	{
		free(ptr);
		return (NULL);
	}
	if (new_size < old_size)
	{
		ptr1 = malloc(new_size);
		if (ptr1 == NULL)
		{
			return (NULL);
		}
		a = 0;
		while (a < new_size)
		{
			((char *)ptr1)[a] = ((char *)ptr)[a];
			a++;
		}
		free(ptr);
		return (ptr1);
	}
	if (new_size > old_size)
	{
		ptr1 = malloc(new_size);
		if (ptr1 == NULL)
		{
			return (NULL);
		}
		a = 0;
		while (a < old_size)
		{
			((char *)ptr1)[a] = ((char *)ptr)[a];
			a++;
		}
		free(ptr);
		return (ptr1);
	}
	return (NULL);
}
