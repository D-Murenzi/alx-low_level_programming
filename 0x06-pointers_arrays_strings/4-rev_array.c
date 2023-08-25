/* this is a function that reverses the elements of an array */
#include "main.h"
/**
 * reverse_array-this reverses elements of array
 * @a: pointer to the array
 * @n: being the number of elements if an array
 * Return: void
 */

void reverse_array(int *a, int n)
{
	int *b;

	b = a;
	while (n > 0)
	{
		*a = *(b + (n - 1));
		a++;
		n--;
	}
	return (0);
}
