#include "main.h"
/**
 * print_triangle- prints triangles of things
 *
 * Return: returns void
 */
void print_triangle(int size)
{
	int columns;
	int rows;

	for (rows = 1; rows <= size; rows++)
	{
		for (columns = 1; columns <= rows; columns++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
	if (size <= 0)
	{
		_putchar('\n');
	}
}
