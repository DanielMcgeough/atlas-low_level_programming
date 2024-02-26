#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * op_add - adds some shit
 * @a: an int
 * @b: another int
 * Return: returns an int
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - subtracts some shit
 * @a: an int
 * @b: another int
 * Return: returns an int
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - multiplies some shit
 * @a: an int
 * @b: another int
 * Return: returns an int
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - divides some shit
 * @a: an int
 * @b: another int
 * Return: returns an int
 */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}

/**
 * op_mod - moduleses some shit
 * @a: an int
 * @b: another int
 * Return: returns an int
 */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}

	return (a % b);
}
