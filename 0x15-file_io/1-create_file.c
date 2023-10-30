/* this function creates a file and writes a text on it*/
#include "main.h"
#include <limits.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>

/**
 * create_file-creates a file and writes a text on the file
 * @filename: the file to be opened
 * @text_content:text to write to the file
 * Return: 1 on success or -1 on failure
 */

int create_file(const char *filename, char *text_content)
{
	if (filename)
	{
		char *ptr;
		int a, b;

		ptr = text_content;
		b = 0;
		while (*ptr != '\0')
		{
			b++;
			ptr++;
		}
		a = open(filename, O_RDWR | O_CREAT | O_TRUNC, 0600);
		if (a < 0)
		{
			return (-1);
		}
		write(a, text_content, b);
		return (1);
	}
	return (-1);
}
