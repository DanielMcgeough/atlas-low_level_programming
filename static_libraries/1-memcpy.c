#include "main.h"
/**
 * _memcpy- copies chars from two mem areas
 * @dest: destination of copied
 * @src: source to copy from
 * @n: integer to say how many to copy
 *
 * Return: returns a char
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int a;

	for (a = 0; n > 0; a++)
	{
		dest[a] = src[a];
		n--;
	}
	return (dest);
}

