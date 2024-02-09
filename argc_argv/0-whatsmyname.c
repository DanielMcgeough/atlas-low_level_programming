#include "main.h"
#include <stdio.h>

/**
 * whatsmyname- prints name of program
 *@argc: count of arguments
 *@argv: vector of arguments
 *
 * Return: returns an int
 */
int main(int argc, char *argv[])
{
	(void) argc;
	printf("%s\n", argv[0]);

	return (0);
}
