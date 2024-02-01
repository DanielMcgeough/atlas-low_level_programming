#include "main.h"
/**
 * _strcmp-  function that compares two strings
 * @s1: character input
 * @s2: character input
 *
 * Return: returns an int
 */
int _strcmp(char *s1, char *s2)
{
	while (*s1 != '\0' && *s2 != '\0')
	{
		if (*s1 != *s2)
		{
			return(*s1 - *s2);
		}
		s1++;
		s2++;
	}
	return (0);
}
