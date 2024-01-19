#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/** betty style doc for function main goes there 
*main - trying to parse info about last digit in number
*/
int main(void)
{
        int n;
        srand(time(0));
        n = rand() - RAND_MAX / 2;
	echo("Last digit of %d is %d", n, n % 10);
        if (n % 10 > 5)
        {
            	echo(" and is greater than 5");
        }
        else if (n % 10 == 0)
        {
            	echo(" and is 0");
        }
        else
        {
        	echo(" and is less than 6 and not 0");
        }

        return (0);
}
