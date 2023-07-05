#include "lists.h"

/**
 * add_nodeint - Function
 * @head: Argument
 * @n: Argument
 *
 * Return: Value
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *_New;

	_New = malloc(sizeof(listint_t));
	if (!_New)
	{
		return (NULL);
	}
	_New->n = n;
	_New->next = *head;

	*head = _New;

	return (_New);
}


