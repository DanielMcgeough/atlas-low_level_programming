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
	unsigned int b;
	int sum = 0;
	char *e;

	if (argc > 1)
	{
		for (a = 1; a < argc; a++)
		{
			e = argv[a];
			
			for (b = 0; b < strlen(e); b++)
			{
				if (e[b] < 48 || e[b] > 57)
				{
					printf("Error\n");
					return (1);
				}
			}

			sum += atoi(e);
			e++;
		}
		printf("%d\n", sum);
	}
	else
	{
		printf("0\n");
	{
	return (0);
}
