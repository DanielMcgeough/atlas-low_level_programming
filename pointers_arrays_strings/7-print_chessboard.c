#include "main.h"
/**
 * print_chessboard- prints a chessboard with loops
 * @a: an array of length
 *
 * Return: returns void
 */
void print_chessboard(char (*a)[8])
{
	int row = 0;
	int column = 0;

	for (row = 0; row < 8; row++)
	{
		for (column = 0; column < 8; column++)
		{
			putchar (a[row],[column]);
		}
	}
}
