/* this function compares two string and*/
/*returns the length of similarities at*/
/* the beggining of the strings */
#include "main.h"
/**
 * _strspn-compares two strings at returns the length of first similarities
 * @s: pointer ti the first string
 * @accept:the second string of comparison
 * Return: unsigned interger
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int n;

	n = 0;
	while ((*s != '\0') && (*accept != '\0'))
	{
		while ((*s != *accept) && (*accept != '\0'))
		{
			accept++;
		}
		if (*s == *accept)
		{
			n++;
		}
		s++;
	}
	return (n);
}
