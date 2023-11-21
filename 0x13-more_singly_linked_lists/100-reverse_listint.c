#include "lists.h"

/**
 * reverse_listint - reverses a list
 * @head: first node
 * Return: pointer to first node of reversed list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *start, *other;

	if (*head == NULL || (*head)->next == NULL)
	{
		return (*head);
	}
	start = *head;
	other = start->next;

	reverse_listint(&other);

	start->next->next = start;
	start->next = NULL;

	*head = other;

	return (other);
}
