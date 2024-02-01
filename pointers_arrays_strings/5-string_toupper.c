#include "main.h"
/**
 * *string_toupper- changes lower to upper case
 *
 * @*abigail: pointer to a char
 * Return: Returns a char
 */
char *string_toupper(char *abigail)
{
	int i;

	for (i = 0; abigail[i] != '\0'; i++)
	{
		if (abigail[i] >= 97 && abigail[i] <= 122)
		{
		abigail[i] = abigail[i] - 32;
		}
	}
	return (abigail);
}
