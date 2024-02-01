#include "main.h"
/**
 * *_strncpy- function to copy a string
 * @dest: string passed in
 * @src: other string passed in
 * @n: int passed in
 *
 * Return: Returns a char printing new string
 */
char *_strncpy(char *dest, char *src, int n)
{
	int a;

	for (a = 0; dest[a] != '\0' && a <= n; a++)
	{
		dest[a] = src[a];
	}
	dest[a++] = '\0';
	return (dest);
}
