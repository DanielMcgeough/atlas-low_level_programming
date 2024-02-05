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

	while (*s != '\0') 
	{
		if (*s == *accept) 
		{
                return 1;
		}
		s++;
	}
	return 0;
	}

	while (*s != '\0') 
	{
        length++;
        s++;
	}
	return length;
}
