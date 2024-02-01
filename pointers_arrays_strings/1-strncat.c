#include "main.h"
/**
 * *_strncat- function to concatenate two strings
 * @dest: string passed in
 * @src: other string passed in
 * @n: an int passed in
 *
 * Return: Returns a char printing new string
 */
char *_strncat(char *dest, char *src, int n)
{
	int a = 0;
	int b = 0;

	while (dest[b] != '\0')
	{
		b++;
	}
	if (src[a] != '\0')
	{
		for (a = 0; a < n; a++)
		{
			dest[b + a] = src[a];
		}
	}
	dest[b + a] = '\0';
	return (dest);
}
