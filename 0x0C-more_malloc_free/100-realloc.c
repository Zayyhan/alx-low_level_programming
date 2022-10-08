#include "main.h"
#include <stdlib.h>

/**
 * _realloc - reallocates a memory block using malloc and free
 *
 * @ptr:  pointer to the memory previously allocated with a call to malloc
 * malloc(old_size)
 * @old_size: is the size, in bytes, of the allocated space for ptr
 * @new_size: is the new size, in bytes of the new memory block
 * Return: void
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *a;
	char *old = ptr;
	unsigned int x;

	if (new_size == old_size)
		return (ptr);

	if (ptr == NULL)
	{
		a = malloc(new_size);
		return (a);
	}
	if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}

	a = malloc(new_size);
	if (a == NULL)
	{
	return (NULL);
	}

	for (x = 0; x < old_size; x++)
		a[x] = old[x];

	free(old);
	return (a);
}
