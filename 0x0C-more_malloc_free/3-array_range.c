#include  "main.h"
#include <stdlib.h>

/**
 * array_range - creates and array of integers
 *
 * @min: smallest integer
 * @max: largest integer
 * Return: the pointer to the newly created array
 */

int *array_range(int min, int max)
{
	int *array;
	int x, y = 0;

	if (min > max)
		return (NULL);

	array = malloc(sizeof(int) * (max - min + 1));
	if (array == NULL)
		return (NULL);

	for (x = min; x <= max; x++)
	{
		array[y] = x;
		y++;
	}

	return (array);
}
