#include "lists.h"

/**
 * free_list - frees list_t
 * @head: start node
 */
void free_list(list_t *head)
{
	list_t *new = head;
	list_t *next;

	while (new != NULL)
	{
		next = new->next;
		free(new);
		new = next;
	}
}
