#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strlen- returns the length of the string
 * @s: this is string input
 * Return: length of string for sucess
 */

int _strlen(char *s)
{
	int a = 0;

	if (s == NULL)
	{
		return (0);
	}
	while (*s != '\0')
	{
		a++;
		s++;
	}
	return (a);
}

/**
 * string_nconcat-concatenates two strings
 * @s1:pointer to the first string
 * @s2: pointer to the second string
 * @n: number of bytes from s2 to add on s1
 * Return: apointer to new string
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int a;
	unsigned int b;
	char *c;
	unsigned int d;
	unsigned int e;

	a = _strlen(s1);
	b = _strlen(s2);
	if ((s1 == NULL) && (s2 == NULL))
	{
		return (NULL);
	}
	c = malloc(((a + b) + 1) * sizeof(char));
	if (c == NULL)
	{
		return (NULL);
	}
	d = 0;
	while (d < a)
	{
		c[d] = s1[d];
		d++;
	}
	e = 0;
	while ((e <=  n) && (s2[e] != '\0'))
	{
		c[d] = s2[e];
		e++;
		d++;
	}
	c[d] = '\0';
	return (c);
}
