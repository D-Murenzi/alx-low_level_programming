/* this function prints a string in reverse using recursions */
#include "main.h"

/**
 * _strlen_recursion-function that calculates the length of a string
 * @s: pointer to the string
 * Return:an integer value that is length of the string
 */

int _strlen_recursion(char *s)
{
	char *b;

	b = s;
	if (*b == '\0')
	{
		return (b - s);
	}
	b++;
	_strlen_recursion(b);
}
