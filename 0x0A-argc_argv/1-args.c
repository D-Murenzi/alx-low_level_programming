/* this function prints the number of arguments passed to it */
#include <stdlib.h>
#include <stdio.h>
/**
 * main-call other function
 * @argc:number of arguments
 * @argv:number of strings
 * Return:0 on succcess
 */

int main(int argc, char *argv[])
{
	(void)argv;
	printf("%d\n", (argc - 1));
	return (0);
}
