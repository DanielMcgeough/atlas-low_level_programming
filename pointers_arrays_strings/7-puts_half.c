#include "main.h"
/**
 * puts_half- print latter half of string.
 * @str: string passed in
 *
 * Return: Return is void
 */
void puts_half(char *str)
{
	int a, length = 0, odd = 0;

	while(str[length] != '\0')
	{
		length++;
	}
	length--;
	if (length % 2 != 0)
	{
		odd = length / 2 + 1;
		for (a = odd; odd <= length; a++)
		{
			_putchar[a];
		}
	}
	_putchar('\n')
}	
