/* this is function that initialize a variable of structure dog */
#include <stdio.h>
#include "dog.h"



/**
 * init_dog-function that intialize a structure
 * @d:pointer to the structure
 * @name:pointer to the name of the dog
 * @age:age of the dog
 * @owner:the pointer to the owner
 * Return: void
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
