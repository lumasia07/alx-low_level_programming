#include "lists.h"

/**
 * sum_listint - returns sum of n
 * @head: pointer to first node
 * Return: sum of data n
 */
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *now = head;

	while (now != NULL)
	{
		sum = sum + (now->n);
		now = now->next;
	}
	return (sum);
}
