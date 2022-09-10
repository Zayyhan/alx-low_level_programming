#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
* main - print if the number is positive, zero, or negative 
*
* Description: use the main function 
* this program prints "positive, zero, or negative 
* Return: Alway 0 (Success)
*/
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
if (n > 0)
{
	printf("%s is positive\n", n);
}
else if (n == 0)
{
	printf("%s is zero\n", n);
}
else if (n < 0)
{
	printf("%s is negative\n", n);
}
return (0);
}
