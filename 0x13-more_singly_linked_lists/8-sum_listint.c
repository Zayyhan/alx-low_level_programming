#include "lists.h"

/**
 * sum_listint - returns the sum of all the data of a list
 *
 * @head: beginning of list
 * Return: if the list is empty, return 0
 */

int sum_listint(listint_t *head)
{
	int add = 0;

	if (head == NULL)
		return (0);

	while (head)
	{
		add = add + head->n;
		head = head->next;
	}
	return (add);
}
