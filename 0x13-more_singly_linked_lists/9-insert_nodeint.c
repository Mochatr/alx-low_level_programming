#include "lists.h"

/**
 * insert_nodeint_at_index - Function
 * @head: Argument
 * @idx: Argument
 * @n: Argument
 *
 * Return: Value
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int a;
	listint_t *new;
	listint_t *temp = *head;

	new = malloc(sizeof(listint_t));

	if (!new || !head)
	{
		return (NULL);
	}
	new->n = n;
	new->next = NULL;

	if (idx == 0)
	{
		new->next = *head;
		*head = new;
		return (new);
	}

	for (a = 0; temp && a < idx; a++)
	{
		if (a == idx - 1)
		{
			new->next = temp->next;
			temp->next = new;
			return (new);
		}
		else
		{
			temp = temp->next;
		}
	}

	return (NULL);
}
