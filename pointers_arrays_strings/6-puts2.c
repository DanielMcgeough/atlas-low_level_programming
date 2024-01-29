#include "main.h"
/**
 * print_rev- prints a string in reverse
 * @str: passed in character as pointer
 *
 * Return: return is void
 */
void puts2(char *str)
{
	int len = 0;
	
	while(*str != '\0')
	{
		if(len % 2 == 0)
		{
			_putchar(*str);
			len++;
			str++;
		}
	}
	_putchar('\n');
}
