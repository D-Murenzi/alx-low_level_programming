/* this program reverses a string */
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
 * rev_string-reverses the string
 * @s: this is a string input
 * Return: void
 */
void rev_string(char *s)
{
	int n = _strlen(s);
	char my[1500];
	int a = 0;
	int i;

	while (n > 0)
	{
		my[a] = s[n - 1];
		a++;
		n--;
	}

	for (i = 0; i < _strlen(s); i++)
	{
		s[i] = my[i];
	}
}
