#include "main.h"
#include <stdio.h>
/**
 * main- multiplies two numbers
 * @argc: count of arguments
 * @argv: vector of arguments
 *
 * Return: product in int
 */
int main(int a, int b)
{	
	int result = (a * b);

	if (argc < 2)
	{
		printf("error\n");
		return (1);
	}
	else if (argc >= 2)
	{
		printf("(%d)", result);
		return (result);
	}
	return (0);
}
