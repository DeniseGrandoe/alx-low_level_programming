#include "lists.h"

/**
 *listint_len - returns the number of elements in a linked listint_t list.
 *@h:pointer to head node
 *Return:number of nodes
 */

size_t print_listint(const listint_t *h);
{
	size_t node_num = 0;

	while (h)
	{
		h = h->next;
		node_num++;
	}
	return (node_num);
}
