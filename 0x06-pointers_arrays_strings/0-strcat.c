#include <stdio.h>
#include "main.h"

/**
* *_strcat - concatenates two strings
*
* @dest: destination
* @src: source
* Return: destination
*/

char *_strcat(char *dest, char *src)
{
int i = 0, j = 0;

while (dest[i])
j++;

for (i = 0; src[i]; i++)
dest[j++] = src[i];

return (dest);
}
