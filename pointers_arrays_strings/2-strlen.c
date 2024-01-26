#include "main.h"
/**
 * _strlen- returns length of string
 * @s: string
 *
 * Return: length of string is returned
 */
int _strlen(char *s)
{
	int length = 0;

	while (*s != '\0')
	{
		length++;
		s++;
	}
	return (length);
}
