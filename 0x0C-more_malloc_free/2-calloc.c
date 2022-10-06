#include "main.h"
#include <stdlib.h>

/**
 * _calloc - allocates memory for an array, using malloc.
 *
 * @nmemb: number of elements
 * @size: size of element type
 * Return: pointer to allocated memory
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *array;
	unsigned int x;

	if (nmemb == 0 || size == 0)
		return (NULL);

	array = malloc(size * nmemb);
	if (array == NULL)
		return (NULL);

	for (x = 0; x < (size * nmemb); x++)
		array[x] = 0;

	return (array);
}
