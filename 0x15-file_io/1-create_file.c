/* this function creates a file and write a content to it */

#include "main.h"

/**
 * create_file-function to create a file and write a content to it
 * @filename: the file to create
 * @text_content: the content to write in the file
 * Return: 1 on success or -1 on failure
 */

int create_file(const char *filename, char *text_content)
{
	if (filename)
	{
		int fd, b;

		fd = open(filename, O_RDWR | O_CREAT, S_IRUSR);
		if (fd < 0)
		{
			return (-1);
		}
		if (text_content)
		{
			truncate(filename, 0);
			b = write(fd, text_content, strlen(text_content));
			if (b <= 0)
			{
				close(fd);
				return (-1);
			}
		}
		else
		{
			truncate(filename, 0);
		}
		close(fd);
		return (1);
	}
	return (-1);
}
