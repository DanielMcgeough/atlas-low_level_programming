#include "main.h"
/**
 * print_alphabet_x10
 */
void print_alphabet_x10(void)
{
	char c = 'a';
	int i = 0;

	for (int i; i < 10; i++)
	{
		for (char c; c <= 'z'; c++)
		{
			_putchar(c);
		}
	}
	_putchar('\n');
