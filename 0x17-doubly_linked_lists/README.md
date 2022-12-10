0x17. C - Doubly linked lists

Taks 0 - Print list
Write a function that prints all the elements of a dlistint_t list.
Return: the number of nodes

Task 1 - list length
Write a function that returns the number of elements in a linked dlistint_t
list

Task 2 - Add node
Write a function that adds a new node at the beginning of a dlistint_t list
Return: the address of the new element, or NULL if it failed

Task 3 - Add node at the end
Write a function that adds a new node at the end of a dlistint_t list.
Return: the address of the new element, or NULL if it failed

Task 4 - Free list
Write a function that frees a dlistint_t list.

Task 5 - Get node at index
Write a function that returns the nth node of a dlistint_t linked list.
where index is the index of the node, starting from 0
if node doesnt exist, return NULL

Task 6 - Sum list
Write a function that returns the sum of all the data (n) of a dlistint_t
linked list
if the list is empty, return 0

Task 7 - Insert at index
Write a function that inserts a new node at a given position.
where idx is the index of the list where the new node should be added.
Index starts at 0
Returns: the address of the new node, or NULL if it failed
if it is not possible to add the new node at index idx, do not add the new node
and return NULL

Task 8 - Delete at index
Write a function that deletes the node at index index of a dlistint_t linked
list.
where index is the index of the node that should be deleted. Index starts at 0
Returns: 1 if it succeeded, -1 if it failed