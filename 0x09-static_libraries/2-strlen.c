/* this function returns the length of the string*/
#include "main.h"

/**
 * _strlen- returns the length of the string
 * @s: this is string input
 * Return: length of string for sucess
 */

int _strlen(char *s)
{
	int a = 0;

	while (*s != '\0')
	{
		a++;
		s++;
	}
	return (a);
}
