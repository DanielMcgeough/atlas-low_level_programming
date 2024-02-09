#include "main.h"
#include <stdio.h>

/**
 * main- prints all args it receives
 * @argc: count of arguments
 * @argv: vector of arguments
 *
 * Return: return is an int
 */
int main(int argc, char *argv[])
{
	int i;

	(void) argc;
	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
	
	
