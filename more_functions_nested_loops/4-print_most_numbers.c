#include "main.h"
/**
 * print_most_numbers- print numbers from 0-9 without 2 and 4
 *
 * Return: return is void
 */
void print_most_numbers(void)
{
	int a =0;

	while (a < 10)
	{
		if (a != 2 || a != 4)
		{
			_putchar(48 + a);
			a++;
		}
	}
	_putchar('\n');
}
