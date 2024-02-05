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
	char *h;
	char *n;

	for (; *haystack != '\0'; haystack++)
	{
		char *h = haystack;
		char *n = needle;

		while (*h == *n && *n != '\0')
		{
			h++;
			n++;
		}

		if (*n == '\0')
			return (haystack);
	}
	return ('\0');
}
