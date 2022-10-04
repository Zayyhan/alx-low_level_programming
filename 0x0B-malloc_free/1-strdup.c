#include "main.h"
#include <stdlib.h>

/**
 * _strdup - returns a pointer to a newly allocated space in memory,
 * which contains a copy of the string given as a parameter.
 *
 * @str: string to copy
 * Return: pointer to the duplicated string
 * NULL if insufficient memory was available
 */

char *_strdup(char *str)
{
	unsigned int i, j;
	char *s;

	if (str == NULL)
		return (NULL);

	i = 0;
	while (str[i])
		i++;

	s = malloc(sizeof(char) * (i + 1));
	if (s == NULL)
		return (NULL);

	j = 0;
	while (str[j])
	{
		s[j] = str[j];
		j++;
	}
	s[j + 1] = 0;
	return (s);
}
