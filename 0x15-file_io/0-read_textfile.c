/* this function reads from a file, and prints the text to stdout*/

#include <unistd.h>
#include <stdio.h>
#include "main.h"

ssize_t read_textfile(const char *filename, size_t letters)
{
	if (filename)
	{
		char *ptr;
		ssize_t b, c;
		int a;
		
		ptr = malloc(sizeof(char) * INT_MAX);
		a = open(filename, O_RDONLY);
		if (a == -1)
		{
			free(ptr);
			return (0);
		}
		if ((b = read(a, ptr, letters)) == -1)
		{
			free(ptr);
			return (0);
		}
		c = write(STDOUT_FILENO, ptr, b);
		if (c == -1)
		{
			free(ptr);
			return (0);
		}
		else
		{
			free(ptr);
			return (c);
		}
	}
	return (0);
}
