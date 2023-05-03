#include"lists.h"

/**
 * pop_listint - functins that deletes the head node.
 * @head: pointer to the head
 * Return: the head node’s data and if the linked list is empty return 0
 */
int pop_listint(listint_t **head);
{
	listint_t *instant;
	int node_num;

	if (!head || !*head)
		return (0);

	node_num = (*head)->n;
	node_num = (*head)->next;
	free(*head);
	*head = node_num;

	return (node_num);
}
