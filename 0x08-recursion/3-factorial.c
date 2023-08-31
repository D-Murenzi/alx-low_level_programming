/* function that calculates the factorial of a number */
#include "main.h"

/**
 * factorial-function that recurses to calculate factorial
 * @n: an integer to calculate its factorial
 * Return: factorial of the number
 */

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n == 0)
	{
		return (1);
	}
	return (n * factorial(n - 1));
}
