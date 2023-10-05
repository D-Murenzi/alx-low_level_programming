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
	if (filename)
	{
		int fd, a, c;
		char *buff;

		buff = malloc(letters + 1);
		if (buff != NULL)
		{
			for(a = 0; a <= (int)letters; a++)
			{
				buff[a] = '\0';
			}
		}
		else
		{
			return (0);
		}
		fd = open(filename, O_RDONLY);
		if (fd < 0)
		{
			free(buff);
			return (0);
		}
		read(fd, buff, letters);
		if (a < 0)
		{
			free(buff);
			close(fd);
			return (0);
		}
		c = write(STDOUT_FILENO, buff, letters);
		if (c < 0)
		{
			free(buff);
			close(fd);
			return (0);
		}
		free(buff);
		close(fd);
		return (c);
	}
	return (0);
}
