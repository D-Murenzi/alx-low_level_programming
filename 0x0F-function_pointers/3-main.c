/* this is file containing main function to the program I wrote */
#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

/**
 * main-calls other functions
 * @argc: number of arguments passed
 * @argv:list of arguments passed
 * Return: 0 on success or something else on failure
 */
int main(int argc, char *argv[])
{
	int a;
	int (*operation)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	if (((argv[2][0] == '/') || (argv[2][0] == '%')) && (atoi(argv[3]) == 0))
	{
		printf("Error\n");
		exit(100);
	}
	operation = get_op_func(argv[2]);
	if (operation == NULL)
	{
		printf("Error\n");
		exit(99);
	}

	a = operation(atoi(argv[1]), atoi(argv[3]));

	printf("%d\n", a);
	return (0);
}
