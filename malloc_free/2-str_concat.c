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
	int i, j, k, l;
	char *s;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (i = 0; s1[i] != '\0'; i++)
	{
	}
	for (j = 0; s2[j] != '\0'; j++)
	{
	}
	l = i + j;
	s = malloc((sizeof(char) * l) + 1);
	if (s == NULL)
	{
		return (NULL);

	}
	j = 0;
	while (k < l)
	{
		if (k <= i)
		{
			s[k] = s1[k];

		}
		if (k >= i)
		{
			s[k] = s2[j];
			j++;

		}
		k++;
	}
	s[k] = '\0';
	return (s);
}
