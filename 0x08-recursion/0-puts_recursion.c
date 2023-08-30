/* this function prints a string to the stdout */
#include "main.h"
/**
 * _puts_recursion-function to print a string
 * @s: pointer to the string to be printed
 * Return: nothing
 */

void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		return ();
	}
	_putchar(*s);
	s++;
	_puts_recursion(char *s);
}
