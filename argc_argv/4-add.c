#include "main.h"
#include <stdio.h>
/**
 * main- adds positive numbers
 * @argc: count of arguments
 * @argv: vector of arguments
 *
 * Return: will return int
 */
int main(int argc, char *argv[])
{
	int a;
	int b;

	for(a = 0; a < argc; a++)
	{
		if (argv[a] < 48 || > 57)
		{
			printf("Error\n");
			return (1);
		}
		else if (argc < 2)
		{
			printf("0\n");
		}
		else
		{
			argv[a] + argv[a]
		}
	}
	return (0);
}


