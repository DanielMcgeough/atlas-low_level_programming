#include <stdio.h>
/**
 * main - print all single numbers
 *
 * Return: always return 0
 */
int main(void)
{
	int a = 0;

	while (a < 10)
	{
		putchar(48 + a);
		a++;
	}
	putchar('\n');

	return (0);
}
