#include "main.h"
/**
 * print_binary- prints bin rep of a number
 * @n: number to make binary
 * Return: returns void
 */
void print_binary(unsigned long int n)
{
	int a = 0;
	int count = 0;
	unsigned long int deuces;

	for (a = 63; i >= 0; i--)
	{
		deuces = n >> i;

		if (deuces & 1)
		{
			_putchar('1');
			count++;
		}
		else if (count)
			_putchar('0');
	}
	if (!count)
		_putchar('0');
}
