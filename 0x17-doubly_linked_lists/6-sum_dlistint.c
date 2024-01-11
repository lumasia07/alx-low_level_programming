#include "lists.h"

/**
 * sum_dlistint - returns sum of all data in list
 * @head: first list of node
 * Return: sum of all data list n
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;
	dlistint_t *now = head;

	while (now != NULL)
	{
		sum += now->n;
		now = now->next;
	}
	return (sum);
}
