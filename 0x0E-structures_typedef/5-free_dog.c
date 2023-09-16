/* this function frees dog */
#include <stdio.h>
#include "dog.h"

/**
 * free_dog-function frees memory allocated in structure dog_t
 * @d:input pointer to the structure
 * Return: nothing
 */

void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		if (d->name != NULL)
		{
			free(d->name);
		}
		if (d->owner != NULL)
		{
			free(d->owner);
		}
		free(d);
	}
}
