#include "lists.h"

/**
 * sum_listint - Function
 * @head: Parameter
 *
 * Return: Value
 */
int sum_listint(listint_t *head)
{
	int the_sum = 0;
	listint_t *temp = head;

	while (temp)
	{
		the_sum += temp->n;
		temp = temp->next;
	}

	return (the_sum);
}
