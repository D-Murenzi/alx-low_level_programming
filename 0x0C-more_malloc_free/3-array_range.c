/* this function creates array of intergers */

#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * array_range-makes an array of integres
 * @min:minimum value of the array
 * @max:maximim value
 * Return:pointer to anewly created array
 */

int *array_range(int min, int max)
{
	int a;
	int b;
	int *numbers;

	if (min > max)
	{
		return (NULL);
	}
	a = ((max - min) + 1);
	numbers = malloc(a * sizeof(int));
	if (numbers == NULL)
	{
		return (NULL);
	}
	for (b = 0; min <= max; b++)
	{
		numbers[b] = min;
		min++;
	}
	return (numbers);
}
