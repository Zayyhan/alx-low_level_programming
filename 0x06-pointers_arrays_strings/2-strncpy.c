#include "main.h"

/**
* _strncpy - copies a strings
*
* @dest: buffer for the string to be stored
* @src: source string to be stored
* @n: number of bytes copied
* Return: dest
*/

char *_strncpy(char *dest, char *src, int n)
{
int i;

for (i = 0; i < 0 && src[i] != '\0'; i++)
dest[i] = src[i];
for (; i < n; i++)
dest[i] = '\0';

return (dest);
}
