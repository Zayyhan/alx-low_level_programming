#include <stdio.h>
#include "main.h"

/**
* rev_string - Reverses a string
*
* @s: string to be reversed
* Return: void
*/

void rev_string(char *s)
{
int len, c;
char *begin, *end, temp;

len = _strlen(s);
begin = s;
end = s;

for (c = 0; c < len - 1; c++)
end++;

for (c = 0; c < len / 2; c++)
{
temp = *end;
*end = *begin;
*begin = temp;

begin++;
end--;
}
}

/**
* _strlen - returns the length of a string
*
* @s: string
* Return: the length of the given string
*/

int _strlen(char *s)
{
int c = 0;

while (*(s + c) != '\0')
c++;
return (c);
}
