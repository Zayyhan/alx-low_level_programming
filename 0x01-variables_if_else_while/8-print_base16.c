#include <stdio.h>

/**
* main - Entry point
*
* Return: Always 0 (Success)
*/
int main(void)
{
char num, alphabet;

for (num = '0'; num <= '9'; num++)
putchar(num);

for (alphabet = 'a'; alphabet <= 'f'; alphabet++)
putchar(alphabet);

return (0);
}
