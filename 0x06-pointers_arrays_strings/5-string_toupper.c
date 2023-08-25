/* this function changes lower case into uppercase */
#include "main.h"
/**
 * string_toupper- converts small letters to capital
 * @:pointer input
 * Return: pointer
 */

char *string_toupper(char *str)
{
	while (*str != '\0')
	{
		if((*str >= 97) && (*str <= 122))
		{
			*str = *str - 32;
		}
		str++;
	}
	return (str);
}
