#include "lists.h"

/**
 * free_dlistint - frees a list
 * @head: first node of list
 * Return: Always 0
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *now = head;
	dlistint_t *next;

	while (now != NULL)
	{
		next = now->next;
		free(now);
		now = next;
	}
}
