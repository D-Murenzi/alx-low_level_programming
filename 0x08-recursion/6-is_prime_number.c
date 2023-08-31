/* hhhd */
#include "main.h"

/**
 * prime-devides the number and its consequetive number to check for primality
 * @n: interger input
 * @b: the consequnt numbers
 * Return: interger values
 */
int prime(int n, int b)
{
	if (b == 1)
	{
		return (1);
	}
	if (n % b == 0)
	{
		return (0);
	}
	return (prime(n, b - 1));
}

/**
 * is_prime_number-checks if number is prime or not
 * @n: the integer to check
 * Return: 0 for not prime and 1 for prime
 */

int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	return (prime(n, n - 1));

}
