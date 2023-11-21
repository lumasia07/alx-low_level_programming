#include "lists.h"

/**
 * find_listint_loop - finds a loop in a linked list
 * @head: first node
 * Return: addresss of node where loop starts
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *low, *high;

	low = head;
	high = head;

	while (low && high && high->next)
	{
		low = low->next;
		high = high->next->next;

		if (low == high)
		{
			low = head;

			while (low != high)
			{
				low = low->next;
				high = high->next;
			}
			return (low);
		}
	}
	return (NULL);
}
