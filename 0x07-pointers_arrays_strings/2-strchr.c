#include "main.h"
#include <stddef.h>

/**
* _strchr - locates a character in a string
*
* @s: string to check
* @c: character
* Return: a pointer to the first occurance of the character @c in the string
* else return NULL if the character is not found.
*/

char *_strchr(char *s, char c)
{
while (*s)
{
if (*s != c)
s++;
else
return (s);
}
if (c == '\0')
return (s);

return (NULL);
}
