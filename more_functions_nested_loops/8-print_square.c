#include "main.h"
/**
 * print_square- prints a number of squares.
 * @size: amount of squares to print
 *
 * Return: void
 */
void print_square(int size)
{
	int rows;
	int columns;

	for (rows = 1; rows <= size; rows++)
	{
		for (columns = 1; columns <= size; columns++)
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
