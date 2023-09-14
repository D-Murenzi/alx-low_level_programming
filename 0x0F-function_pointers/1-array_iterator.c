/*this program excutes a given function as parameter on each element of array*/
#include <stdio.h>
#include "function_pointers.h"

/**
 * array_iterator-function to apply given function on each elts of an array
 * @array:array to look for its elements
 * @size: the size of an array
 * @action: the pointer to function to apply on the array's elt
 * Return: void
 */


void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int a;

	if ((action == NULL) || (array == NULL))
	{
		return;
	}
	a = 0;
	while (a < size)
	{
		action(array[a]);
		a++;
	}
}
