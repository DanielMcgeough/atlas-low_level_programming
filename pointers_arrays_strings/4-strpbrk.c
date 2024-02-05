#include "main.h"
/**
 * _strpbrk -searches string for set of bytes
 * @s: array as string
 * @accept: array as string
 *
 * Return: pointer to a byte as char or NULL
 */
char *_strpbrk(char *s, char *accept)
	int i;

	while(*s)
	{
		for(i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
			return (s);
		}
	s++;
	}
	return('\0');
}
