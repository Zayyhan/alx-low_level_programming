#include "lists.h"
#include <stdio.h>

/**
 * print_list - prints all elements of list_t
 *
 * @h: list to print
 * Return: the number of nodes
 */

size_t print_list(const list_t *h)
{
	int list;

	list = 0;
	while (h)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", h->len, h->str);
		h = h->next;
		list++;
	}
	return (list);
}