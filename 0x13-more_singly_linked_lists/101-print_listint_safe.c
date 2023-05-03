#include"lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * looped_listint_len - print andcount the number of unique nodes
 * in a looped listint_t linked list.
 * @head: A pointer to the head of the listint_t to check.
 *
 * Return: If the list is not looped - 0.
 * Otherwise - the number of unique nodes in the list.
 */
size_t looped_listint_len(const listint_t *head)
{
	const listint_t *list1, *list2;
	size_t nodes = 1;

	if (head == NULL || head->next == NULL)
		return (0);

	list1 = head->next;
	list2 = (head->next)->next;

	while (list2)
	{
		if (list1 == list2)
		{
			list1 = head;
			while (list1 != list2)
			{
				nodes++;
				list1 = list1->next;
				list2 = list2->next;
			}

			list1 = list1->next;
			while (list1 != list2)
			{
				nodes++;
				list1 = list1->next;
			}

			return (nodes);
		}

		list1 = list1->next;
		list2 = (list2->next)->next;
	}

	return (0);
}

/**
 * print_listint_safe - Prints safe listint_t list.
 * @head: pointer to the head of the listint_t list.
 *
 * Return: number of nodes in the list.
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t nodes, index = 0;

	nodes = looped_listint_len(head);

	if (nodes == 0)
	{
		for (; head != NULL; nodes++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}
	}

	else
	{
		for (index = 0; index < nodes; index++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}

		printf("-> [%p] %d\n", (void *)head, head->n);
	}

	return (nodes);
}
