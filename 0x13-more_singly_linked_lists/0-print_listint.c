#include "lists.h"

/**
 * print_listint - prints all elelents of a list
 * @h: pointer to listint_t
 * Return: number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t i;

	for (i = 0; h != NULL; i++)
	{
		printf("%d\n", h->n);
		h = h->next;
	}

	return (i);
}
