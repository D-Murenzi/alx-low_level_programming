/* this functions checks if an input from user is a digit or not */
#include "main.h"

/**
 * _isdigit-function takes input and tells if it digit or not
 * @c: is an interger input
 * Return: 1 if its digit and 0 if its not
 */

int _isdigit(int c)
{
	int d;

	if ((d >= 48) && (d <= 57))
	{
		d = 1;
	}
	else
	{
		d = 0;
	}
	return (d);
}
