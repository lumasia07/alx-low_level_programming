#include "lists.h"

/**
 * free_listint_safe - frees a list
 * @h: first node
 * Return: size of list that was freed
 */
size_t free_listint_safe(listint_t **h)
{
	listint_t *low, *high, *hold;
	size_t i;

	low = *h;
	high = *h;

	for (i = 0; low && high && high->next; i++)
	{
		hold = low;
		low = low->next;
		high = high->next->next;

		if (low == high)
		{
			i++;
			for (i = 0; low != high || i == 1; i++)
			{
				hold = low;
				low = low->next;
				free(hold);
			}
			*h = NULL;
			return (i);
		}
	}
	for (i = 0; *h != NULL; i++)
	{
		hold = *h;
		*h = (*h)->next;
		free(hold);
	}

	return (i);
}
