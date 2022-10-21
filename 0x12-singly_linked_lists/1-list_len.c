#include "lists.h"

/**
 * list_len - returns number of elements in a linked list_t list
 *
 * @h: the linked list to check
 * Return: number of elements in h
 */

size_t list_len(const list_t *h)
{
	int list = 0;

	while (h)
	{
		h = h->next;
		list++;
	}
	return (list);
}
