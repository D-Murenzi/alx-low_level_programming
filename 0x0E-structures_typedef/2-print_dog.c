/* this function prints the content of struture dog*/
#include "dog.h"
#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * print_dog-function to print memners of the structure dog
 * @d: pointer to the structure
 * Return: void
 */

void print_dog(struct dog *d)
{
	if (d == NULL)
	{
		return;
	}
	if (d->name == NULL)
	{
		printf("(nil)");
	}
	else
	{
		printf("Name: %s\n", d->name);
	}

	printf("Age: %f", d->age);

	if (d->owner == NULL)
	{
		printf("(nil)");
	}
	else
	{
		printf("Owner: %s", d->owner);
	}
}
