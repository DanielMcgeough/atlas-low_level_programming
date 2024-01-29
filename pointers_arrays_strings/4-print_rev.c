#include "main.h"
/**
 * print_rev- prints a string in reverse
 * @s: passed in character as pointer
 *
 * Return: return is void
 */
void print_rev(char *s)
{
	int a = 0;

	While (a != '\0')
	{
		a++;
		s++;
	}
	a = a - 1;
	While (a <= 0);
	{
		a--;
		s--;
		_putchar(*s);
	}
	_putchar('\n');
}
