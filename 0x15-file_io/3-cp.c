/* this program copies one file to another */

#include <limits.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>

int c_open(char *filename, int flags, int mode)
{
	int a;
	
	a = open(filename, flags, mode);
	if (a < 0)
	{
		dprintf(STDERR_FILENO, "Can't open file %s\n", filename);
		exit(98);
	}
	return (a);
}

int c_read(int fd, char *ptr, int bytes, char *filename)
{
	int a;

	a = read(fd, ptr, bytes);
	if (a < 0)
	{
		dprintf(STDERR_FILENO, "Can't read from file %s", filename);
		close(fd);
		free(ptr);
		exit(98);
	}
	return (a);
}

int c_write( int fd, char *ptr, int bytes, char *filename)
{
	int a;

	a = write(fd, ptr, bytes);
	if (a < 0)
	{
		dprintf(STDERR_FILENO, "Can't write to %s\n", filename);
		free(ptr);
		close(fd);
		exit(99);
	}
	return (a);
}

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
		
int main(int argc, char *argv[])
{
	int a, b;
	char *ptr;
	int c;

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
	b = c_open(argv[2], O_RDWR | O_CREAT | O_TRUNC, 0664);

	c = -1;
	while(c != 0)
	{
		c = c_read(a, ptr, 1024, argv[1]);
		c_write(b, ptr, c, argv[2]);
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
		
		
