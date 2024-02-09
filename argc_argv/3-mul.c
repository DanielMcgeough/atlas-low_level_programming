#include "main.h"
#include <stdio.h>
/**
 * main- multiplies two numbers
 * @argc: count of arguments
 * @argv: vector of arguments
 *
 * Return: product in int
 */
int main(int argc, char *argv[])
{	
	int a = 2;
	int b = 5;
	int c = (a * b);

	(void) argc;
	(void) argv;

	if (argc < 2)
	{
		printf("error\n"
		return (1);
	}
	else if (argc >= 2)
	{
		printf("(%d)", c);
		return (c);
	}
	return (0);
}
