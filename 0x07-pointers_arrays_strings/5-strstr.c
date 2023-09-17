/* this program seaches for substring into the string */
#include "main.h"

/**
 * _strstr-searches for a substring within the string
 * @haystack:string to seach in
 * @needle: the substring to search in the string
 * Return: pointer to the substring or null if the substring is not found
 */

char *_strstr(char *haystack, char *needle)
{
	char * b;

	if ((haystack == NULL) || (needle == NULL))
	{
		return (NULL);
	}
	while (*haystack != '\0')
	{
		if (*haystack == *needle)
		{
			b = haystack;
			while ((*haystack == *needle) && (*needle != '\0'))
			{
				needle++;
			}
			if (*needle == '\0')
			{
				return (b);
			}
		}
		haystack++;
	}
	return (NULL);
}
