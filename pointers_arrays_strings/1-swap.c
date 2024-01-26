#include "main.c"
/**
 * swap_int- swap the values of two integers
 * @a:integer value
 * @b:integer value as well
 *
 * Return: Return void
 */
void swap_int(int *a, int *b);
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
