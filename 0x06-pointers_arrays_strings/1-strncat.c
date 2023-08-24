/* this program will concatenate two strings till nth element of the second*/
#include "main.h"
/**
 * _strncat-function to concatenate two strings
 * @dest:a string input
 * @src: another string input
 * @n: this is interger to stop concatanation
 * Return: pointer to new string array
 */

char *_strncat(char *dest, char *src, int n)
{
	char *first;
	int a;

	first = dest;

	while (*dest != '\0')
	{
		dest++;
	}

	for (a = 0; a < n; a++)
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (first);
}
