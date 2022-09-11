#include <stdio.h>

/**
* main - Entry point
*
* Description: this program prints lowercase alphabet
* Return : Always 0 (Success)
*/
int main(void)

{
char alphabet;

for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
{
putchar(alphabet);
}

putchar('\n');

return (0);

}
