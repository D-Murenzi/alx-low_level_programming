/* this program concatenates two string*/
#include "main.h"
#include <stdlib.h>

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
 * str_concat-joins two string adding string 2 to strng 1
 * @s1:the first string
 * @s2: the second string
 * Return: pointer to the new string
 */

char *str_concat(char *s1, char *s2)
{
	unsigned int b;
	unsigned int c;
	char *d;
	int e;
	int f;
	char *g;

	e = 0;
	f = 0;
	if (s1 == NULL)
	{
		b = 0;
	}
	else
	{
		b = length(s1);
	}
	if (s2 == NULL)
	{
		c = 0;
	}
	else
	{
		c = length(s2);
	}

	d = malloc(((b + c) + 1) * sizeof(char));
	g = d;
	while (e < b)
	{
		d[e] = s1[e];
		e++;
	}
	while (f <= c)
	{
		d[e + f] = s2[f];
		f++;
	}
	return (g);
}
