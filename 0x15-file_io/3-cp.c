/* this program copies one file to another*/

#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * main-entry point of the program
 * @argc:the number of arguments passed to the program
 * @argv[]:array of arguments
 * Return:0 on sucess or -1 on failure
 */

int main(int argc, char *argv[])
{
	int fda, fdb, a, b, d, f, g;
	char *buff;

	buff = malloc(sizeof(char) * 1025);
	if (buff == NULL)
	{
		exit(100);
	}
	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		free(buff);
		exit(97);
	}
	fda = open(argv[1], O_RDONLY);
	if (fda < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		free(buff);
		exit(98);
	}
	fdb = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, S_IWUSR | S_IRUSR |
		   S_IWGRP | S_IRGRP | S_IROTH);
	if (fdb < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		free(buff);
		exit(99);
	}
	while ((a = read(fda, buff, 1024)) > 0)
	{
		if (a < 0)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n",
				argv[1]);
			close(fda);
			close(fdb);
			free(buff);
			exit(98);
		}
		b = write(fdb, buff, 1024);
		if (b < 0)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			close(fda);
			close(fdb);
			free(buff);
			exit(99);
		}
		for (d = 0; d <= 1024; d++)
		{
			buff[d] = '\0';
		}
	}
	b = write(fdb, buff, 1024);
	f = close(fda);
	if (f != 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fda);
		free(buff);
		exit(100);
	}
	g = close(fdb);
	if (g != 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fdb);
		free(buff);
		exit(100);
	}
	free(buff);
	return (0);
}
