#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - allocates memory using malloc
 *
 * @b: int to malloc
 * Return: pointer to allocated memory
 */

void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);
	return (ptr);

	if (ptr == NULL)
		exit(98);
}
