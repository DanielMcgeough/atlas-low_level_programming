#include "main.h"
/**
 * _strspn- get length of prefix substring
 * @s: array of char as string.
 * @accept: array of char as string also.
 *
 * Return: returns an unsigned int.
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int length = 0;
	int i;

	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
			{
				length++;
				break;
			}
			else if (accept[i + 1] == '\0')
				return (length);
		}
		s++;
	}
	return (length);
}
