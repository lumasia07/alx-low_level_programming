#include "lists.h"

/**
 * listint_len - returns number of elemets in a linked list
 * @h: pointer to listint_t
 * Return: number of elements in linked list
 */
size_t listint_len(const listint_t *h)
{
	size_t i = 0;

	while (h != NULL)
	{
		h = h->next;
		i++;
	}
	return (i);
}
