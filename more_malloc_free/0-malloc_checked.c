#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * malloc_checked- allocates memmory using malloc
 * @b: an unsigned int passed in. probably to hold the pointer
 * Return: returns a void
 */
void *malloc_checked(unsigned int b)
{
	int *a;

	a = malloc(b);

	if (a == NULL)
	{
		exit(98);
	}
	return (a);
}
