#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * sum_listint - Calculates the sum of all data in a listint_t linked list.
 * @head: Pointer to the head of the linked list.
 * using while loop
 * Return: The sum of all data in the linked list.
 */
int sum_listint(listint_t *head)
{
int sum = 0;

while (head != NULL)
{
sum += head->n;
head = head->next;
}

return (sum);
}

