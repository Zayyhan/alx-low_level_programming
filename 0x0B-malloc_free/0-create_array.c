#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates an array of chars,
 * and initializes it with a specific char.
 *
 * @size: size of array
 * @c: character to initialize
 * Return: a pointer to the array, or NULL if it fails
 */

char *create_array(unsigned int size, char c)
{
	unsigned int n;
	char *s;

	s = malloc(sizeof(char) * size);
	if (size == 0 || s == NULL)
		return (NULL);

	n = 0;
	while (n < size)
	{
		s[n] = c;
		n++;
	}
	return (s);
}
