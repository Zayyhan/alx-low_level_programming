#include "lists.h"

/**
 * get_nodeint_at_index -  returns the nth node of a listint_t linked list.
 *
 * @head: pointer to head node
 * @index: index of node
 * Return: if the node does not exist, return NULL
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int count;

	count = 0;
	while (head)
	{
		if (index == count)
			return (head);

		head = head->next;
		count++;
	}
	return (NULL);
}
