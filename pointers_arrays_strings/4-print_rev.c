#include "main.h"
/**
 * print_rev- prints a string in revers
 * @s: string to print
 *
 * Return: Return is void
 */
void print_rev(char *s)
{
	int i = _strlen(s);

	while (s[i])
	{
		_putchar(s[i]);
		i--;
	}
	_putchar('\n');
}
