#include "lists.h"

/**
 * get_dnodeint_at_index - function
 * @head: parameter
 * @index: parameter
 * Return: Value
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int current_idx = 0;

	while (head)
	{
		if (current_idx == index)
			return (head);
		head = head->next;
		current_idx++;
	}
	return (NULL);
}
