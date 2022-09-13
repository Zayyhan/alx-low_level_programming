#include <stdio.h>

/**
* main - prints the alphabet
*
* Description: use the main function
* Return: Always 0 (Success)
*/
int main(void)
{
char alphabet;

for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
putchar(alphabet);

putchar('\n');

return (0);
}
