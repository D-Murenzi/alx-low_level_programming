/* this program reverses a string */
#include "main.h"

/**
 * rev_string-reverses the string
 * @s: this is a string input
 * Return: void
 */
void rev_string(char *s)
{
	int n=_strlen(s);
	char mystring[n];
	int a=0;

	while (n > 0)
	{
		mystring[a] = s[n-1];
		a++;
		n--;
	}
	for (int i=0; i < _strlen(s); i++)
	s[i]=mystring[a];
}
		