#include "lists.h"

/**
 * dlistint_len - returns number of elements in a linked list
 * @h: pointer to linked list
 * Return: number of elements in linked list
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t i = 0;

	while (h != NULL)
	{
		i++;
		h = h->next;
	}
	return (i);
}
