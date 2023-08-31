/* this function calculates the power of a value n raised to power y */
#include "main.h"

/**
 * _pow_recursion -raises int x to the power of y
 * @x: int value to be raised
 * @y: value to raise x in
 * Return: power of x raised to value x
 */
int _pow_recursion(int x, int y);
{
	if (y < 0)
	{
		return (-1);
	}
	if (y == 0)
	{
		return (1);
	}
	return (x * _pow_recursion(x, (y - 1)));
}
