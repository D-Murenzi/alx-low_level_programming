/* this is a program that prints the name using function pointer */
#include <stdio.h>
#include "main.h"

/**
 * print_name- function to print a name using pointer to function
 * @name: pointer to the name to be printed
 * @f:pointet to the called function
 * Return: void
 */

void print_name(char *name, void (*f)(char *))
{
	f(name);
}
