/* this function checks if a the input is alphabet */
#include "main.h"

/**
 * _isalpha-check if character is an alphabet or not
 * @c:the character to be checked
 * Return: 1 if alphabet and 0 if not
 */
int _isalpha(int c)
{
	if (((c >= 97) && (c <= 122)) || ((c >= 65) && (c <= 90)))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
