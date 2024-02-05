#include "main.h"
/**
 * _strstr- locates a substring
 *
 * @haystack: string in an array
 * @needle: string in an array also.
 *
 * Return: Return is a char or null.
 */
char *_strstr(char *haystack, char *needle)
{
	int i;

	for (i = 0; *haystack = '\0'; haystack++)
	{
		while (haystack == needle && needle != '\0')
		{
			haystack++;
			needle++;
		}

		if (needle == '\0')
			return (haystack);
	}
	return ('\0');
}
