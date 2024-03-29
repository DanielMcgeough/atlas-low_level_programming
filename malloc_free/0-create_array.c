#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array- create an array and init it
 * @size: size of array
 * @c: char passed into func
 *
 * Return: returns a pointer or NULL
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *s;

	if (size == 0)
	{
		return (NULL);
	}

	s = malloc(sizeof(char) * size);

	if (s == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < size; i++)
	{
		s[i] = c;
	}

	return (s);
}
