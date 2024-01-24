#include "main.h"
/**
 * _isdigit- checks for a digit.
 * @c: input int
 *
 * Return: returns 1 if digit, otherwise no.
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
