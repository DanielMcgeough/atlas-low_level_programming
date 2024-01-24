#include "main.h"
/**
 * print_diagonal- prints diagonal slashes
 * @n: number of diagonal things
 *
 * Return: return is void
 */
void print_diagonal(int n)
{
	int a;
	int b;

	for (a = 0; a < n; a++)
	{
		for (b = 1; b <= a; b++)
		{
			_putchar(' ');
		}
		_putchar('\\');
		_putchar('\n');
	}
	if (n <= 0)
	{
		_putchar('\n');
	}
}
