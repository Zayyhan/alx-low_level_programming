#include "lists.h"

/**
 * pop_listint - deletes the head node of a listint_t linked list
 *
 * @head: beginning node list
 * Return: head node’s dataf
 */

int pop_listint(listint_t **head)
{
	listint_t *tmp;
	int i;

	if (*head == NULL)
		return (0);

	tmp = *head;
	i = tmp->n;
	*head = tmp->next;

	free(tmp);
	return (i);
}
