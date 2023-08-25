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
	int *temp;

	b = (a + (n - 1));
	while (n > 0)
	{
		*temp = *a;
		*a = *b;
		*b = *temp
		a++;
		b--;
	}
	return ();
}
