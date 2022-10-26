#include "lists.h"

/**
 * add_nodeint - adds a new node at the beginning of a listint_t list.
 *
 * @head: head node list
 * @n: data to add to node
 * Return: the address of the new element, or NULL if it failed
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *addNew;

	addNew = malloc(sizeof(listint_t));
	if (addNew == NULL)
		return (NULL);

	addNew->n = n;
	addNew->next = *head;
	*head = addNew;
	return (addNew);
}
