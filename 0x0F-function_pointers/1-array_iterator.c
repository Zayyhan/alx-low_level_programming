#include <stdio.h>
#include "function_pointers.h"

/**
 * array_iterator - executes a function given as a parameter on each element of
 * an array.
 *
 * @array: array to be passed/executed
 * @size: is the size of the array
 * @action: is a pointer to the function I need to use
 * Return: void`
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i = 0;
	void (*p)(int);

	p = action;

	if (!array || !action)
		return;

	for (i = 0; i < size; i++)
		p(array[i]);
}
