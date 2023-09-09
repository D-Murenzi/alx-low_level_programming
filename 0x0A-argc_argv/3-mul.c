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

	if (argc <= 2)
	{
		printf("Error\n");
		return (1);
	}

	a = atoi(argv)[1])*(atoi(argv)[2]);
	printf("%d\n", a);
	return (0);
}
