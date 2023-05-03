#include"lists.h"
/**
 * find_listint_loop - finds the loop in a linked list
 * @head: linked list to  for
 *
 * Return: address of the node where the loop starts, or NULL
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *slow = head;
	listint_t *speed = head;

	if (!head)
		return (NULL);

	while (slow && speed && speed->next)
	{
		speed = speed->next->next;
		slow = slow->next;
		if (speed == slow)
		{
			slow = head;
			while (slow != speed)
			{
				slow = slow->next;
				speed = speed->next;
			}
			return (speed);
		}
	}

	return (NULL);
}
