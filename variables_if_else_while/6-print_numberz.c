#include <stdio.h>

/**
 *main - print base 10 single digit numbers
 *
 * Return: always returns 0
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
