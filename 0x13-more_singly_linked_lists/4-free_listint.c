#include "lists.h"

/**
 * free_listint - function that frees a listint_t list.
 * @head: pointer to the head
 */

void free_listint(listint_t *head);
{
	listint_t *instant;

	while (head)
	{
		instant = head->next;
		free(head);
		head = instant;
	}
}
