#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * main - new func for argc and argv to pass
 * @argc: counts the arguments
 * @argv: vector of arguments
 * Return: returns an int
 */
int main(int argc, char *argv[])
{
	int (*oprt)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	oprt = get_op_func(argv[2]);

	if (!oprt)
	{
		printf("Error\n");
		exit(99);
	}

	printf("%d\n", oprt(atoi(argv[1]), atoi(argv[3])));
	return (0);
}
