/* this program copies one file to another */

#include <string.h>
#include <limits.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>

/**
 * c_open-opens a file for reading or writing
 * @filename: the file to be openned
 * @flags: int values specifying the permissions to open file with
 * @mode: the permissions for oepned or created file
 * Return: the file descriptor to the file
 */

int c_open(char *filename, int flags, int mode)
{
	int a;

	a = open(filename, flags, mode);
	if (a < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", filename);
		exit(98);
	}
	return (a);
}

/**
 * c_read-reads from the file descriptor
 * @fd: descriptor to read from
 * @ptr: buffer to read and put
 * @bytes: the number of bytes to read
 * @filename: the file to read from
 * Return: the number of bytes read
 */

int c_read(int fd, char *ptr, int bytes, char *filename)
{
	int a;

	a = read(fd, ptr, bytes);
	if (a < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s", filename);
		close(fd);
		free(ptr);
		exit(98);
	}
	return (a);
}

/**
 * c_write-function thay write bytes to file descriptor
 * @fd: the descriptor to write to
 * @ptr: the buffer to read from
 * @bytes: the bytes to write
 * @filename: the file to write to
 * Return: the number of bytes read
 */

int c_write(int fd, char *ptr, int bytes, char *filename)
{
	int a;

	a = write(fd, ptr, bytes);
	if (a < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", filename);
		free(ptr);
		close(fd);
		exit(99);
	}
	return (a);
}

/**
 * c_close-function that closes file descriptor
 * @fd:the file descriptor to close
 * Return: nothing
 */

void c_close(int fd)
{
	int a;

	a = close(fd);
	if (a != 0)
	{
		dprintf(STDERR_FILENO, "Can't close fd %d\n", a);
		exit(100);
	}
}

/**
 * main-entry to the program and calling other functions
 * @argc: the number of arguments passed to prog
 * @argv: the array to the arguments
 * Return: 0 on success and any number on failure
 */

int main(int argc, char *argv[])
{
	char *ptr, *ptr2;
	int a, b, d, c = -1;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	ptr = malloc(sizeof(char *) * 1025);
	if (ptr == NULL)
	{
		exit(100);
	}
	a = c_open(argv[1], O_RDONLY, 0);
	b = c_open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	ptr2 = ptr;
	while (c != 0)
	{
		d = 1;
		c = c_read(a, ptr, 1024, argv[1]);
		c_write(b, ptr, c, argv[2]);
		while (d <= 1025)
		{
			*ptr2 = '\0';
			ptr2++;
			d++;
		}
	}
	free(ptr);
	if (close(a))
	{
		dprintf(STDERR_FILENO, "can't close fd %d\n", a);
		exit(100);
	}
	if (close(b))
	{
		dprintf(STDERR_FILENO, "can't close fd %d\n", b);
		exit(100);
	}
	return (0);
}
