#include <stdio.h>
#include "main.h"

/**
* puts_half - prints the second half of a string
*
* @str: string
* Return: void
*/

void puts_half(char *str)
{
int len, c;

len = _strlen(str);

for (c = ((len - 1) / 2) + 1; c < len; c++)
_putchar(*(str + c));
_putchar(10);
}

/**
* _strlen - returns length of string
*
* @s: string
* Return: c (Success)
*/

int _strlen(char *s)
{
int c = 0;

while (*(s + c) != '\0')
c++;

return (c);
}
