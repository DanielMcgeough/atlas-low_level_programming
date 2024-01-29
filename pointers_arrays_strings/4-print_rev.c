#include "main.h"
/**
 * print_rev- prints a string in reverse
 * @s: passed in character as pointer
 *
 * Return: return is void
 */
void print_rev(char *s)
{
	int a;

	for (*s = 0; *s != '\0'; s++)
	{
		a++;
	}
	for (a = a - 1; a >= 0; a--)
	{
		s--;
		_putchar(*s);
	}
	_putchar('\n');
}
