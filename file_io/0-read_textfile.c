#include "main.h"

/**
 * read_textfile- a function that reads a file and prints it to stdout
 * @filename: naem of the files
 * @letters: the letters to print
 * Return: returns an output of ssize_t
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *oof;
	ssize_t filedes;
	ssize_t w;
	ssize_t t;

	filedes = open(filename, O_RDONLY);
	if (filedes == -1)
		return (0);

	oof = malloc(sizeof(char) * letters);
	t = read(filedes, oof, letters);
	w = write(STDOUT_FILENO, oof, t);

	free(oof);
	close(filedes);
	return (w);
}
