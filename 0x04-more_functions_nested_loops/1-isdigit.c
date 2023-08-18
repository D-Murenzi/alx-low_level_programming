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

	if ((d >= '0') && (d <= '9'))
	{
		d = 1;
	}
	else
	{
		d = 0;
	}
	return (d);
}

#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    char c;

    c = '0';
    printf("%c: %d\n", c, _isdigit(c));
    c = 'a';
    printf("%c: %d\n", c, _isdigit(c));
    return (0);
}
