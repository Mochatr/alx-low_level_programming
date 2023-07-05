#include "lists.h"

/**
 * delete_nodeint_at_index - Function
 * @head: Parameter
 * @index: Parameter
 * Return: A value
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp = *head;
	listint_t *Current = NULL;
	unsigned int a = 0;

	if (*head == NULL)
	{
		return (-1);
	}

	if (index == 0)
	{
		*head = (*head)->next;
		free(temp);
		return (1);
	}

	while (a < index - 1)
	{
		if (!temp || !(temp->next))
		{
			return (-1);
		}
		temp = temp->next;
		a++;
	}

	Current = temp->next;
	temp->next = Current->next;
	free(Current);

	return (-1);
}

