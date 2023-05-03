#include"lists.h"

/**
 * get_nodeint_at_index - returns the node at a particular index
 * @head: pointer to the head
 * @index: index of the node 
 * Return: pointer to the node search for, or NULL
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *node_num = head;

	while (node_num && i < index)
	{
		node_num = node_num->next;
		i++;
	}

	return (node_num);
}
