/* function that writes a duplicate of a string in allocated memory */
#include <stdlib.h>
#include "main.h"

/**
 * length-calculates the lenght of string
 * @str:string input to calculate its length
 * Return: unsigned interger
 */

unsigned int length(char *str)
{
	unsigned int a;

	for (a = 0; *str != '\0'; a++)
	{
		str++;
	}
	return (a);
}

/**
 * _strdup-copies a string to allocated area
 * @str:input string to diplicate
 * Return:pointer to the array if success
 */

char *_strdup(char *str)
{
	char *p;
	unsigned int b;
	char *c;

	if (str == NULL)
	{
		return (NULL);
	}
	b = 0;
	p = malloc((length(str) + 1) * sizeof(char));
	if (p != NULL)
	{
		c = p;
		while (b < (length(str) + 1))
		{
			*p = *str;
			p++;
			str++;
			b++;
		}
		return (c);
	}
	else
	{
		return (NULL);
	}
}
