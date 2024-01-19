#include <stdio.h>
/**
*main - trying to print alphabet without q's and e's using putchar
*return always 0
*/
int main(void)
{
	char c = 'a'

		; while (c <= 'z')
		{
			if (c != 'q' && c != 'e')
			{
				putchar(c);
			}
		c++;
		}
	putchar('\n');

	return (0);
}
