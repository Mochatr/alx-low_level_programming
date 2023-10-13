#include "lists.h"

/**
 * insert_dnodeint_at_index - function
 * @h: parameter
 * @idx: parameter
 * @n: parameter
 * Return: Value
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *currNode = *h, *newNode;

	if (idx == 0)
		return (add_dnodeint(h, n));

	for (; idx != 1; idx--)
	{
		currNode = currNode->next;
		if (currNode == NULL)
			return (NULL);
	}

	if (currNode->next == NULL)
		return (add_dnodeint_end(h, n));

	newNode = malloc(sizeof(dlistint_t));
	if (newNode == NULL)
		return (NULL);

	newNode->n = n;
	newNode->prev = currNode;
	newNode->next = currNode->next;
	newNode->next->prev = newNode;
	currNode->next = newNode;

	return (newNode);
}
