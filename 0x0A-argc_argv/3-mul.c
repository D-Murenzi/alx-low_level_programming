/* this function prints the number of arguments passed to it */
#include <stdio.h>
#include "main.h"
#include <stdlib.h>
/**
 * main-call other function
 * @argc:number of arguments
 * @argv:number of strings
 * Return:0 on succcess
 */

int main(int argc, char *argv[])
{
	int a;
	int b;
	int c;

	if (argc <= 2)
	{
		printf("Error\n");
		return (1);
	}
	b = atoi(argv[1]);
	c = atoi(argv[2]);
	a = b * c;
	printf("%d\n", a);
	return (0);
}
