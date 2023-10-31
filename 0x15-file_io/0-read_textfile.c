/* this function reads from a file, and prints the text to stdout*/

#include <unistd.h>
#include <stdio.h>
#include "main.h"

/**
 * read_textfile-reads a text from a file and print it to stdout
 * @filename: the file to read from
 * @letters: the number of bytes to read and write
 * Return: 0 on failure or number of bytes read and wrote on stdout
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	if (filename)
	{
		char *ptr;
		ssize_t b, c;
		int a;

		ptr = malloc(sizeof(char) * INT_MAX);
		if (ptr == NULL)
		{
			return (0);
		}
		a = open(filename, O_RDONLY);
		if (a == -1)
		{
			free(ptr);
			return (0);
		}
		b = read(a, ptr, letters);
		if (b == -1)
		{
			close(a);
			free(ptr);
			return (0);
		}
		c = write(STDOUT_FILENO, ptr, b);
		if (c == -1)
		{
			close(a);
			free(ptr);
			return (0);
		}
		else
		{
			close(a);
			free(ptr);
			return (c);
		}
	}
	return (0);
}
