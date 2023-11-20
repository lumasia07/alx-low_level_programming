#include "lists.h"

/**
 * free_listint - freeslist
 * @head: pointer to first node
 */
void free_listint(listint_t *head)
{
	listint_t *next_freed;
	listint_t *now = head;

	while (now != NULL)
	{
		next_freed = now->next;
		free(now);
		now = next_freed;
	}
}
