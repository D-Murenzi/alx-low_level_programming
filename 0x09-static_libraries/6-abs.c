/* this is a program that calculates absolute value of an integer */
#include "main.h"

/**
 * _abs-copmutes absolute value
 * @b:an int value to compute its abs
 * Return: abs
 */
int _abs(int b)
{
	if (b > 0)
	{
		return (b);
	}
	else
	{
		return (0 - b);
	}
}
