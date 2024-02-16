#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * string_nconcat- concatenates two strings
 * @s1: first string to concatenate
 * @s2: second string to concatenate.
 * @n: unsigned int.
 * Return: returns a char.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	int a = 0, b = 0, d = 0;
	unsigned int c = 0;
	char *s3;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[a])
		a++;
	while (s2[c])
		c++;

	if ( n >= c)
		d = a + c;
	else
		d = a + n;
	s3 = malloc((sizeof(char) * d) + 1);
	if (s3 == NULL)
		return (NULL);

	c = 0;
	while (b < d)
	{
		if (b <= a)
			s3[b] = s1[b];
		if (b >= a)
		{
			s3[b] = s2[c];
			c++;
		}
		b++;
	}
	s3[b] = '\0';
	return (s3);
}
