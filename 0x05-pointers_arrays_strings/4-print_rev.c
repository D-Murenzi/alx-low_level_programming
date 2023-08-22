/* this function prints a string in reverse and newline */
#include "main.h"

/**
 * _strlen - returns the length of a string
 * @s: string
 * Return: length
 */
int _strlen(char *s)
{
	int longi = 0;

	while (*s != '\0')
	{
		longi++;
		s++;
	}

	return (longi);
}

/**
 * print_rev-reverses the string
 * @*s: is string input
 * Return: nothing
 */

void print_rev(char *s)
{
	int n = _strlen(s);

	while (n > 0)
	{
		putchar(*(s + (n - 1)));
		n--;
	}
	putchar('\n');
}
