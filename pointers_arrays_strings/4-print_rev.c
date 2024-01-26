#include "main.h"
/**
 * print_rev- prints a string in revers
 * @s: string to print
 *
 * Return: Return is void
 */
void print_rev(char *s)
{
	int i = s[i];

	while (s[i])
	{
		_putchar(s[i]);
		i--;
	}
	_putchar('\n');
}
