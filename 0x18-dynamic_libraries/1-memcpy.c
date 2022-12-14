#include "main.h"

/**
* _memcpy - copies memory area
*
* @dest: where the copied memory goes to
* @n: number of bytes
* @src: memory area to copy
* Return: pointer dest
*/

char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int i;

for (i = 0; i < n; i++)
{
dest[i] = src[i];
}
return (dest);
}
