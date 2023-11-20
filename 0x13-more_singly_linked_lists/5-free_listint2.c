#include "lists.h"

/**
 * free_listint2 - frees a list
 * @head: first node
 */
void free_listint2(listint_t **head)
{
	listint_t *freed_node;
	listint_t *now = *head;

	while (now != NULL)
	{
		freed_node = now->next;
		free(now);
		now = freed_node;
	}
	*head = NULL;
}
