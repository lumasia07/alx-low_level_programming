#include "lists.h"

/**
 * print_listint_safe - prints a linked list
 * @head: first node
 * Return: numbers of nodes in the list
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t i;
	const listint_t *low, *high;

	low = head;
	high = head;

	for (i = 0; low && high && high->next; i++)
	{
		printf("[%p] %d\n", (void *)low, low->n);

		low = low->next;
		high = high->next->next;

		if (low == high)
		{
			printf("[%p] %d\n", (void *)low, low->n);
			printf("-> [%p] %d\n", (void *)high->next, high->next->n);
			exit(98);
		}
	}
	return (i);
}
