#include "main.h"
#define BUF_SIZE 1024
int make_betty_happy(void);
/**
 *main - copies content from one file to another
 *@argc: checked output
 *@argv: checked ouput
 *
 *Return: always return 0
 */
int main(int argc, char *argv[])
{
	int fd_from, fd_to, bytes_read, bytes_written;
	char buffer[BUF_SIZE];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		return (97);
	}

	fd_from = open(argv[1], O_RDONLY);
		if (fd_from == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
			return (98);
		}

	fd_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
		if (fd_to == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			close(fd_from);
			return (99);
		}

		while ((bytes_read = read(fd_from, buffer, BUF_SIZE)) > 0)
		{
			bytes_written = write(fd_to, buffer, bytes_read);
			if (bytes_written != bytes_read)
				{
					dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
					close(fd_from);
					close(fd_to);
					return (99);
				}
		}

	if (bytes_read == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		close(fd_from);
		close(fd_to);
		return (98);
	}

	if (close(fd_from) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_from);
		return (100);
	}

	if (close(fd_to) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_to);
		return (100);
	}

	return (0);
}
