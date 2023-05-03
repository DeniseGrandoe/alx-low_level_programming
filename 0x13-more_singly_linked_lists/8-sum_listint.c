#include "lists.h"

/**
 * sum_listint - function that returns the sum of all the data
 * @head: first node in the linked list
 * Return: resulting finl
 */

int sum_listint(listint_t *head)
{
	int final = 0;
	listint_t *node_num = head;
        
	while (node_num)
        {
	  	final += node_num->n;
	       node_num = node_num->next;
	}
		return (final);
}
