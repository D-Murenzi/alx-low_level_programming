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

	for (a = 0; a < argc; a++)
	{
		printf("%s\n", argv[a]);
		return (0);
	}
}
