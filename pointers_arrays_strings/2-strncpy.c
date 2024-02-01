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
	int a = 0;
	int b = 0;

	for (a = 0; dest[a] != '\0'; a++)
	{
		src[b] = dest[a];
	}
	src[b] = '\0';
	return (src[b]);
