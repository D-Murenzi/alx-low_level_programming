/* this file contains a program to chose which operation to do on inputs*/
#include <stdio.h>
#include "3-calc.h"
#include <stdlib.h>
#include <string.h>

/**
 * get_op_func-function that selets the appropiate function to use as per user
 * @s: the pointer to string entered by the user
 * Return: pointer to a function to perform the operation
 */

int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
			{"+", op_add}, {"-", op_sub}, {"*", op_mul},
			{"/", op_div}, {"%", op_mod}, {NULL, NULL}
	};
	int i;

	i = 0;
	while (ops[i].op != NULL)
	{
		if ((strcmp(ops[i].op, s)) == 0)
		{
			return (ops[i].f);
		}
		i++;
	}
	return (NULL);
}
