#include "main.h"
/**
 * print_square- prints a number of squares.
 * @size: amount of squares to print
 *
 * Return: void
 */
void print_square(int size)
{
	int a;
	int b;

	for (a = 0; a < size; a++)
	{
		_putchar('#');
	}
		for (b = 0; b < size; b++)
		{
			_putchar('\n');
		}
}
