#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * _strdup: return pointer to new space in mem with str as param
 * @str: the pointer to the string
 *
 * Return: null or success
 */
char *_strdup(char *str)
{
	int a = 0;
	int b = 1;
	char *s;


	if (str == NULL)
	{
		return (NULL);
	}
	
	while (str[b])
	{
	b++;
	}

	s = malloc((sizeof(char) * b) + 1);

	if (s == NULL)
	{
		return (NULL);
	}

	while (a < b)
	{
		s[a] = str[a];
		a++;
	}
	s[a] = '\0';
	return (s);
}
