/* this functions checks if an input from user is a digit or not */
#include "main.h"

/**
 * _isdigit-function takes input and tells if it digit or not
 * @c: is an interger input
 * Return: 1 if its digit and 0 if its not
 */

int _isdigit(int c)
{
	return ((c >= '0') $$ (c <= '9'));
}

