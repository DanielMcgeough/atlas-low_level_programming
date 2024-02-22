#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * print_name - prints stuff, a name presumably.
 * @name: the name like Abigial maybe.
 * @f: point to the function, my first.
 * Return: Return is void
 */
void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
			f(name);
}
