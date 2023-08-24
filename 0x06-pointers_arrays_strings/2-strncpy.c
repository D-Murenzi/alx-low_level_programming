/* this function copies astring to another */
#include "main.h"
/**
 * _strncpy-function that copies astring
 * @dest: pointer to buffer that will receive new string
 * @src: pointer to the string to be copied
 * @n: the interger at which copying will terminate
 * Return: pointer to dest buffer
 */

char *_strncpy(char *dest, char *src, int n)
{
	char *first;
	int a;

	first = dest;
	a = 0;
	while ((a < n) && (src[a] != '\0'))
	{
		*dest = *src;
		dest++;
		a++;
	}

	for (; a < n; a++)
	{

		*dest = '\0';
		dest++;
	}
	return (first);
}
