/* this function prints a string in reverse using recursions */
#include "main.h"

/**
 * _strlen_recursion-function that calculates the length of a string
 * @s: pointer to the string
 * Return:an integer value that is length of the string
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	return (1 + _strlen_recursion(s + 1));
}
