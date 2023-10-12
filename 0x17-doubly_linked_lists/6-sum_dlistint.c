#include "lists.h"

/**
 * sum_dlistint - function
 * @head: parameter
 * Return: Value
 */

int sum_dlistint(dlistint_t *head)
{
	int total = 0;

	while (head)
	{
		total += head->n;
		head = head->next;
	}
	return (total);
}
