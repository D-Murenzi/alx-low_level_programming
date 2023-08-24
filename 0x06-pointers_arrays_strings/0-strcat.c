/* this function concatenates two strings */
#include "main.h"

/**
 * _strcat- concatenates two strings
 * @dest: pointer to dest string
 * @src: pointer to the string src which is second argument
 * Return: a pointer to new string array
 */

char *_strcat(char *dest, char *src)
{
	char *first;
	char sentence[1000];
	int n;
	int a;
	int b;

	first = &sentence;

	for (n = 0; *(dest + n) != '\0'; n++)
	{
		sentence[n] = *(dest + n);
	}
	for (b = 0; *(src + b) != '\0'; b++)
	{
		a = n + b;
		sentence[a] = *(src + b);
	}
	sentence[a] = '\0';
	return (first);
}
