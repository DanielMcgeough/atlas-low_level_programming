#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main- multiplies two numbers
 * @argc: count of arguments
 * @argv: vector of arguments
 *
 * Return: product in int
 */
int main(int argc, char *argv[])
{	
	int a = atoi(argv[1]);
	int b = atoi(argv[2]);

	if (argc <= 2)
	{
		printf("error\n");
		return (1);
	}
	else
	{
		printf("(%d\n)", (a * b));
	}
	return (0);
}
