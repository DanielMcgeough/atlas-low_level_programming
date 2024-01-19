#include <stdio.h>
/**
 *main - write a script that prints base 16
 *
 * Return: Always return 0
 */

int main(void)
{
	int i;
	char hex[] = "0123456789abcdef";

	for (i = 0; i <=15; i++)
	{
		putchar(hex[i]);
	}
	putchar('\n');

	return (0);
}
