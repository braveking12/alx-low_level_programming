#include <stdlib.h>
#include "lists.h"

/**
 * free_listint - Frees a listint_t list.
 * using while loop
 * @head: Pointer to the head node of the list.
 */
void free_listint(listint_t *head)
{
listint_t *current;

while (head != NULL)
{
current = head;
head = head->next;
free(current);
}
}

