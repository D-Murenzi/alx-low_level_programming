/* this function write to a file by appending to it*/
#include <limits.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>

/**
 * append_text_to_file-appends a text to a file
 * @filename:the file to append a text to
 * @text_content: the text to append to the file
 * Return: 1 on success or -1 on failure
 */

int append_text_to_file(const char *filename, char *text_content)
{
	if (filename)
	{
		if (text_content)
		{
			int a, b, c;
			char *ptr;

			b = 0;
			ptr = text_content;
			while (*ptr != '\0')
			{
				b++;
				ptr++;
			}
			a = open(filename, O_RDWR | O_APPEND);
			if (a < 0)
			{
				return (-1);
			}
			c = write(a, text_content, b);
			if (c < 0)
			{
				return (-1);
			}
			return (1);
		}
		else
		{
			return (1);
		}
	}
	return (-1);
}
