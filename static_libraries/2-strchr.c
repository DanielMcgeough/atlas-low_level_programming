#include "main.h"
/**
 * _strchr- locate a char in a str
 * @s: point to array which holds str
 * @c: first occ of char and is char.
 *
 * Return: returns a char
 */
char *_strchr(char *s, char c)
{
	int a;

	for (a = 0; s[a] >= '\0'; a++)
	{
		if (s[a] == c)
		{
			return (&s[a]);
		}
	}
	return (0);
}
