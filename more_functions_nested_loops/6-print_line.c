#include "main.h"
/**
 * print_line- make the function print something
 * @n: input number
 *
 * Return: return is void
 */
void print_line(int n)
{
	int a;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{	
		for (a = 0; a < n; a++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
}
