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
	scanf("%d")
	printf("Last digit of %d is %d % 10",(n),(n));
        if (n % 10 > 5)
        {
            	printf("and is greater than 5");
        }
        else if (n % 10 == 0)
        {
            	printf("and is 0");
        }
        else
        {
        	printf("and is less than 6 and not 0");
        }
        return (0);
}