#include "main.h"
/**
 * print_rev- prints a string in reverse
 * @s: passed in character as pointer
 *
 * Return: return is void
 */
void rev_string(char *s)
{
	int a = 0, length = 0;
	char swap;

	while (s[length] != '\0')
	{
		length++;
	}

	length--;

	for (; a <= length; a++, length--)
	{
		swap = s[length];
		s[length] = s[a];
		s[a] = swap;
	}
}
