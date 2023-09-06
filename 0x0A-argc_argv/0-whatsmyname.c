/* this function prints its name*/
#nclude "main.h"
#include <stdlib.h>
/**
 * _main-call the function and prints its name
 * @argc: number arguments main function receives
 * @argv:array of strings made of arguments
 * Return: 0 on success
 */
int _main(int argc, char *argv[])
{
	if (argc >= 1)
	{
		printf("%s", argv[0]);
	}
	return (0);
}
