/* thi is afunction to compare two strings */
#include "main.h"
/**
 *_strcmp-compares the two string
 * @s1: this a pointer to the first string
 * @s2: this is a pointer to the second string
 * Return: 0 for same strings,and int -1 or 1 depending on the difference
 */

int _strcmp(char *s1, char *s2)
{
	int b;

	while ((*s1 == *s2) && (*s1 != '\0'))
	{
		s1++;
		s2++;
	}
	if ((*s1 == '\0') && (*s2 == '\0'))
	{
		b = 0;
	}
	else if (*s1 < *s2)
	{
		b < 0;
	}
	else if (*s1 > *s2)
	{
		b > 0;
	}
	return (b);
}
