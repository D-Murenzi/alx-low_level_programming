/* this file contains operational functions */
#include <stdio.h>
#include "3-calc.h"

/**
 * op_add-adds two integers
 * @a:first int
 * @b: second int
 * Return: integer
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub-subtracts two integers
 * @a:first int
 * @b: second int
 * Return: integer
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul-multiply two integers
 * @a:first int
 * @b: second int
 * Return: integer
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div-divides two integers
 * @a:first int
 * @b: second int
 * Return: integer
 */
int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod-calculates the modula of two integers
 * @a:first int
 * @b: second int
 * Return: integer
 */

int op_mod(int a, int b)
{
	return (a % b);
}
