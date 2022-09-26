#include "main.h"

/**
* _memset - fills memory with a constant
*
* @s: pointer to memory area to fill
* @n: number of bytes to fill
* @b: constant byte
* Return: pointer s
*/

char *_memset(char *s, char b, unsigned int n)
{
unsigned int x;

for (x = 0; x < n; x++)
{
s[x] = b;
}
return (s);
}
