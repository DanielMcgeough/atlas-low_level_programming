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
	void a;

	a = malloc(b);

	if (b == NULL)
	{
		exit(98);
	}
	return (a)
}
