#include "lists.h"

/**
 * list_len - returns number of elements in list_t
 * @h: pointer to struct list_t
 * Return: number od elemets
 */
size_t list_len(const list_t *h)
{
	size_t i;

	for (i = 0; h != NULL; i++)
	{
		h = h->next;
	}
	return (i);
}
