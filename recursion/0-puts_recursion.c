#include "main.h"
/**
 * _puts_recursion- prints a string in the style of puts
 * @s: input character
 *
 * Return: returns void
 */
void _puts_recursion(char *s)
{
	int i = 0;
	
	if(s[i] != '\0')
	{
		_puts_recursion(s);
	}
	i++;
}
