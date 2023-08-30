/* this function prints a string to the stdout */
#include "main.h"
/**
 * _putchar-function to putchar to stdoutput
 * @c:a character to be printed
 * Return: interger
 */

int _putchar(char c);

/**
 * _puts_recursion-function to print a string
 * @s: pointer to the string to be printed
 * Return: nothing
 */

void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return ();
	}
	_putchar(*s);
	s++;
	_puts_recursion(char *s);
}
