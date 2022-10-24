#include "lists.h"
/**
 * find_listint_loop - find the loop contained
 *			in a linked list
 * @head: Pointer to the head of the linked list
 * Return: Pointer the node where the loop starts.
 *		or Null - if there is no loop
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *node1, *node2;

	if (head == NULL || head->next == NULL)
		return (NULL);

	node1 = head->next;
	node2 = (head->next)->next;

	while (node2)
	{
		if (node1 == node2)
		{
			node2 = head;

			while (node1 != node2)
			{
				node1 = node1->next;
				node2 = node2->next;
			}

			return (node1);
		}

		node1 = node1->next;
		node2 = (node2->next)->next;
	}

	return (NULL);
}
