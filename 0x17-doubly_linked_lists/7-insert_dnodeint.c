#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a new node
 * @h: double pointer to list
 * @idx: index where node should be inserted
 * @n: data to new node
 * Return: pointer to new node
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *added, *now;
	unsigned int x = 0;

	added = malloc(sizeof(dlistint_t));
	if (!added)
		return (NULL);

	added->n = n;

	if (!*h || idx == 0)
	{
		added->prev = NULL;
		added->next = *h;
		if (*h)
			(*h)->prev = added;
		*h = added;
		return (added);
	}
	now = *h;
	while (now && x < idx - 1)
	{
		now = now->next;
		x++;
	}

	if (!now || x > idx - 1)
	{
		free(added);
		return (NULL);
	}
	added->prev = now;
	added->next = now->next;
	now->next = added;

	if (added->next)
		added->next->prev = added;

	return (added);
}
