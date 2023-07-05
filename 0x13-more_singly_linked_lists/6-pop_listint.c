#include "lists.h"

/**
 * pop_listint- Function
 * @head: Parameter
 *
 * Return: A value
 */

int pop_listint(listint_t **head)
{
	listint_t *temp;
	int number;

	if (!head || !*head)
	{
		return (0);
	}

	number = (*head)->n;
	temp = (*head)->next;
	free(*head);
	*head = temp;

	return (number);
}
