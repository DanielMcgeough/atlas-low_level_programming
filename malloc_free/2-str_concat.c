#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * str_concat- concats two strings
 * @s1: first string to cat
 * @s2: second string to cat to the first.
 *
 * Return: null or success
 */
char *str_concat(char *s1, char *s2)
{
	int i = 0, j = 0, l = 0;
	char *s;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	while (s1[i])
	{
		i++;
	}
	while (s2[j])
	{
		j++;
	}
	l = i + j;
	s = malloc((sizeof(char) * l) + 1);
	if (s == NULL)
	{
		return (NULL);
	}
	j = 0;
	
	s[j] = '\0';
	return (s);
}