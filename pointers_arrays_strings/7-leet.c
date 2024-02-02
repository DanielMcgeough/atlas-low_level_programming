#include "main.h"
/**
 * leet- convert a stringt to 1337 sp34k.
 * @elite: the characters passed in.
 *
 * Return: returns leet speak.
 */
char *leet(char *elite)
{
	int x = 0;
	int y = 0;
	
	char let[] = "OoLlEeAaTt";
	char num[] = "0011334477";

	for (x = 0; elite[x] != '\0'; x++)
	{
		for (y = 0; y < 10; y++)
		{
			if (elite[x] == let[y])
			{
				elite[x] = num[y];
			}
		}
	}
	return (elite);
}


