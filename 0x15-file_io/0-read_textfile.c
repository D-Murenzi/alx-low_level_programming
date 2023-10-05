/* this function reads a text from a file and print it standard output*/

#include "main.h"

/**
 * read_textfile-reads a specified characters in the file and print them
 * @filename: the path of the file to read from
 * @letters: the number of characters to read from the file
 * Return: number of characters printed.
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	int a;
	int b;

	char *array;

	array = malloc((letters + 1));
	if (array == NULL)
	{
		return (0);
	}

	if (filename)
	{
		fd = open(filename, O_RDONLY);
		if (fd < 0)
		{
			return (0);
		}
		b = 0;
		while ((a = read(fd, array, letters)) > 0)
		{
			b = b + (write(STDOUT_FILENO, array, letters));
		}
		return (b);
	}
	return (0);
}
