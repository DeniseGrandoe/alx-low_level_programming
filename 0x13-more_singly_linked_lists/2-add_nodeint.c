#include "lists.h"
/**
 * add_nodeint - function adds new node at the beginning of a listint_t list
 * @head: pointer to first node
 * @n: int to add new code
 *
 * Return: the address of the new element, or NULL if it failed
 */

listint_t *add_nodeint(listint_t **head, const int n);
{
	listint_t *new_node;

	new_node = malloc(sizeof(listint_t));
	if (!new_node)
		return (NULL);

	new_node->n = n;
	new_node->n = *head;
	*head = new_node;

	return (new_node);
}
