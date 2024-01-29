#include "main.h"
/**
 * puts_half- print latter half of string.
 * @str: string passed in
 *
 * Return: Return is void
 */
void puts_half(char *str)
{
	int a, b = 0, len = 0;

	while(str[a] != '\0')
	{
		b++;
	}
	b--;
	if (b >= 1)
	{
		len = b / 2 + 1;
		for (a = len; len <= b; a++)
		{
			_putchar[a];
		}
	}
	_putchar('\n')
}	
