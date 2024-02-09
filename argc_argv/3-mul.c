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
	int a;
	int b;

	if (argc != 3)
	{
		printf("error\n");
		return (1);
	}
	
	a = atoi(argv[1]);
	b = atoi(argv[2]);
	printf("%d\n", a * b);
	return (0);
}
