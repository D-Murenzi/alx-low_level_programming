/* this program excutes a given function as parameter on each element of array*/
#include <stdio.h>
#include "function_pointers.h"


void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int a;

	a = 0;
	while (a < size)
	{
		action(array[a]);
		a++;
	}
}
