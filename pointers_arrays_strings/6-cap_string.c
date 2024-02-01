#include "main.h"
/**
 *cap_string- capitalize words of a string
 *@strong: string passed in
 *
 * Return: Returns a char
 */
char *cap_string(char *strong)
{	
	int i;
	for(i = 0; strong[i] != '\0'; i++)
	{

		if (strong[i] >= 'a' && strong[i] <= 'z')
		{
			if (i == 0)
			{
				strong[i] -= 32;
			}
			
			
			else if 
			(
			strong[i - 1] == ',' ||
			strong[i - 1] == ' ' ||
			strong[i - 1] == ';' ||
			strong[i - 1] == '.' ||
			strong[i - 1] == '!' ||
			strong[i - 1] == '?' ||
			strong[i - 1] == '"' ||
			strong[i - 1] == '(' ||
			strong[i - 1] == ')' ||
			strong[i - 1] == '{' ||
			strong[i - 1] == '}' ||
			strong[i - 1] == '\n' ||
			strong[i - 1] == '\t'
			)
			{
			strong[i] -= 32;
			}
		}
	}
	return (strong);
}

