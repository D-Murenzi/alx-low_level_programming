/* this function searches for an integer in array*/
#include <stdio.h>
#include "function_pointers.h"

/**
 * int_index-function to search integer and compare it using another func
 * @array: array containing the elements to check
 * @size: size of the array
 * @cmp:pointer to the function used to compare
 * Return: index of the integer in array, -1 on failure
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int a;

	if ((array == NULL) || (cmp == NULL))
	{
		return (-1);
	}
	a = 0;
	if (size <= 0)
	{
		return (-1);
	}
	while (a < size)
	{
		if (cmp(array[a]) != 0)
		{
			return (a);
		}
		a++;
	}
	return (-1);
}
