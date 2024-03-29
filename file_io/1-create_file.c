#include "main.h"
#include <string.h>

/**
 * create_file- function that creates a file
 * @filename: name of the files to create
 * @text_content: string to print
 * Return: returns an int
 */

int create_file(const char *filename, char *text_content)
{
	int fd, text_written;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);
	if (fd == -1)
		return (-1);

	if (text_content != NULL)
	{
		text_written = write(fd, text_content, strlen(text_content));
		if (text_written == -1)
		{
			close(fd);
			return (-1);
		}
	}
	close(fd);
	return (1);
}
