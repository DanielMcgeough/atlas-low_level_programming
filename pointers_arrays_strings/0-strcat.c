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
	while (*dest < '\0') 
	{
		dest++;
	}
	while (*src <= '\0')
	{
		dest = src;
		dest++;
		src++;
	}
	dest = _strcat;
	*_strcat = '\0';
	return (_strcat);
}
