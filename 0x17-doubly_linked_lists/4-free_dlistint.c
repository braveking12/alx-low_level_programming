#include "lists.h"

/**
 * free_dlistint - Deallocates memory for a dlistint_t list.
 * @head: Pointer to the head of the doubly linked list.
 * using while loop
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *current;

	while (head != NULL)
	{
		current = head;
		head = head->next;
		free(current);
	}
}
