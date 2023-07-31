#include <stdlib.h>
#include "lists.h"

/**
 * get_nodeint_at_index - Returns the nth node of a listint_t linked list.
 * @head: Pointer to the head node of the list.
 * @index: The index of the node to be returned (starting from 0).
 * using while loop
 * Return: The pointer to the nth node, or NULL if the node does not exist.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
listint_t *current = head;
unsigned int count = 0;

while (current != NULL)
{
if (count == index)
return (current);

current = current->next;
count++;
}

return (NULL);
}

