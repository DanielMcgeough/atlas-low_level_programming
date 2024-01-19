#include <stdio.h>
/**
*main - displays whether random number is pos, neg, or equal
*Return: always return 0
*/

int main(void)
{
	char c = 'a';
	char d = 'A';

	while (c <= 'z')
	{
		putchar(c);
		c++;
	}
	while (d <= 'Z')
	{
		putchar(d);
		d++;
	}
	putchar('\n');
	return (0);
}
