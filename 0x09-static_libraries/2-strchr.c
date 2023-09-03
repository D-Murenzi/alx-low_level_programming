/* this functionsearches for the first appearance of a charcter in a string */
#include "main.h"
/**
 * _strchr-function that detects the adress of a char in a string
 * @s: this is a pointer to the string
 * @c: the charcter to be found
 * Return: pointer to the charcter
 */

char *_strchr(char *s, char c)
{
	while ((*s != c) && (*s != '\0'))
	{
		s++;
	}
	if (*s == c)
	{
		return (s);
	}
	else
	{
		return (NULL);
	}
}
