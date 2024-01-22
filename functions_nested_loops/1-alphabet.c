#include "main.h"
/**
 * main - print alphabet using _putchar prototype.
 *Return: always return 0
 */
void print_alphabet(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		_putchar(c);
		c++;
	}
	_putchar('\n');
}
