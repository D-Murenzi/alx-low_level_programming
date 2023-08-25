/* this function will capitilize all words of the string */
#include "main.h"
/**
 * cap_string-capitilize each word of the sentence
 * @str: pointer to the sentece or string to be capitilized
 * Return: pointer to the string
 */

char *cap_string(char *str)
{
	char *original;

	original = str;
	while (*str != '\0')
	{
		if (!(((*str >= 65) && (*str <= 90))
		      && ((*str >= 97) && (*str <= 122))))
		{
			str++;
			if (((*str >= 65) && (*str <= 90))
			      || ((*str >= 97) && (*str <= 122)))
			{
				if ((*str >= 97) && (*str <= 122))
				{
					*str = *str - 32;
				}
			}
		}
		else
		{
			str++;
		}
	}
	return (original);
}
