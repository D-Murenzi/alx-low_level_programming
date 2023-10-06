/* this function opens a file and appends a content on it*/

#include "main.h"

/**
 * append_text_to_file-adds a content on the file
 * @filename: the file to add content on
 * @text_content: the content to add to the file
 * Return:1 on success or -1 on failure
 */

int append_text_to_file(const char *filename, char *text_content)
{
	if (filename)
	{
		int fd;

		fd = open(filename, O_WRONLY | O_APPEND);
		if (fd < 0)
		{
			return (-1);
		}
		if (text_content)
		{
			write(fd, text_content, strlen(text_content));
		}
		close(fd);
		return (1);
	}
	return (-1);
}
