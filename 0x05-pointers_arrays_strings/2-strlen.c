#include "main.h"
#include <stdio.h>

/**
* _strlen - function used to return the length of a string
*
* @s: used to display value
* Return: Always 0
*/

int _strlen(char *s)
{
int len;

while (*(s + len) != '\0')
len++;

return (len);
}
