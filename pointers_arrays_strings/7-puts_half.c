#include "main.h"
/**
 * puts_half- print latter half of string.
 * @str: string passed in
 *
 * Return: Return is void
 */
void puts_half(char *str)
{
	int i, length = 0, odd = 0;

	while (str[length] != '\0')
	{
		length++;
	}
		length--;
	if (length >= 1)
	{
		odd = length / 2 + 1;
		for (i = odd; i <= length; i++)
		{
			_putchar (str[i]);
		}
	}
	_putchar ('\n');
}
