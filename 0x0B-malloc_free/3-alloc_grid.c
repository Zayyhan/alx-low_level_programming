#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - returns a pointer to a 2 dimensional array of integers.
 *
 * @width: width of grid
 * @height: height od grid
 * Return: NULL on failure,
 * If width or height is 0 or negative, return NULL
 */

int **alloc_grid(int width, int height)
{
	int **array;
	int w;
	int h = 0;

	if (width == 0 || height == 0)
		return (NULL);

	array = (int **)malloc(sizeof(int *) * height);
	if (array != NULL)
	{
		for (; w < height; w++)
		{
			array[w] = (int *)malloc(sizeof(int) * width);
			if (array[w] != NULL)
			{
				for (h = 0; h < width; h++)
					array[w][h] = 0;
			}
			else
			{
				while (w >= 0)
				{
					free(array[w]);
					w--;
				}
				free(array);
				return (NULL);
			}
		}
		return(array);
	}
	else
	{
		return (NULL);
	}
}
