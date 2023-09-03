/* this function checks if the character is lowercase or not*/
#include "main.h"

/**
 * _islower-checks if a function is lowercase or not
 * @c:input to be checked
 * Return:1 on lowercase and 0 if the input is not lowercase
 */
int _islower(int c)
{
	if ((c >= 97) && (c <= 122))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
