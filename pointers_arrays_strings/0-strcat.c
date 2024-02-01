#include "main.h"
/**
 * *_strcat- function to concatenate two strings
 * @dest: string passed in
 * @src: other string passed in
 *
 * Return: Returns a char printing new string
 */
char *_strcat(char *dest, char *src)
{
	int a = 0;
	int b = 0;

	while (dest[b] != '\0') 
	{
		b++;
	}
	while (src[a] != '\0')
	{
		dest[b] = src[a];
		b++;
		a++;
	}
	dest[b] != '\0';
	return (dest);
}
