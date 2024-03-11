#include "main.h"
#include <string.h>

/**
 * append_text_to_file- self explanatory
 * @filename: name of file to append text to
 * @text_content: text to append to file
 * Return: returns an int
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, text_written;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_WRONLY | O_APPEND);
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
