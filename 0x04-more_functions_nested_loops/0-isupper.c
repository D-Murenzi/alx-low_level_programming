/* this function checks whether a charcter is upper case or not*/
#include <stdio.h>
/**
 * _isupper-function checks for uppercase letters
 * @c:-is character input from the user
 * Return: d- an interger 1 for uppercase and 0 for non uppercase characters
 */

int _isupper(int c)
{
	int d;

	if ((c >= 65) && (c <= 90))
	{
		d = 1;
	}
	else
	{
		d = 0;
	}

	return (d);

}
