#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at a given position.,
 * @head: pointer to the head
 * @idx: index where the new node is added
 * @n: insert in the new node
 *
 * Return:the address of the new node, or NULL if it failed
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i;
	listint_t *new_node;
	listint_t *instant = *head;

	new_node = malloc(sizeof(listint_t));
	if (!new_node || !head)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;

	if (idx == 0)
	{
		new_node->next = *head;
		*head = new_node;
		return (new_node);
	}

	for (i = 0; instant && i < idx; i++)
	{
		if (i == idx - 1)
		{
			new_node->next = instant->next;
			instant->next = new_node;
			return (new_node);
		}
		else
			instant = instant->next;
	}

	return (NULL);
}
