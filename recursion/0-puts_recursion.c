#include "main.h"
/**
 * _puts_recursion- prints a string in the style of puts
 * @s: input character
 *
 * Return: returns void
 */
void _puts_recursion(char *s)
{
	
	if(*s == '\0' +1)
	{
	return;
	}
	else
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
}
