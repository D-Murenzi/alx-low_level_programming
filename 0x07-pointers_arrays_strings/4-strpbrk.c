/* this progrma searches for any of the bytes with string */
#include "main.h"

/**
 * _strpbrk-searches for any of the bytes in a string
 * @s:pointer to the string
 * @accept:bytes to search in the string
 * Return: pointer to the charcter in string or null
 */

char *_strpbrk(char *s, char *accept)
{
	while (*accept != '\0')
	{
		while ((*s != '\0') && (*s != *accept))
		{
			s++;
		}
		if (*s == *accept)
		{
			return (s);
		}
		else
		{
			accept++;
		}
	}
	return ();
}
