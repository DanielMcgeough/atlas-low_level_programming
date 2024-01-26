#include "main.h"
/**
 * print_rev- prints a string in revers
 * @s: string to print
 *
 * Return: Return is void
 * _strlen- returns length of string
 * @s: string
 *
 * Return: length of string is returned
 */
int _strlen(char *s)
{
	int length = 0;

	while (*s != '\0')
	{
		length++;
		s++;
	}
	return (length);
}

void print_rev(char *s)
{
	int i = _strlen(s);

	while (i >= s[i])
	{
		_putchar(s[i]);
		i--;
	}
	_putchar('\n');
}
