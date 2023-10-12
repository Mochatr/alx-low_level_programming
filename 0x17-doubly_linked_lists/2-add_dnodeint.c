#include "lists.h"

/**
 * add_dnodeint - function
 * @head: parameter
 * @n: parameter
 * Return: value
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *newNode = malloc(sizeof(dlistint_t));

	if (!head || !newNode)
		return (newNode ? free(newNode), NULL : NULL);

	newNode->n = n;
	newNode->prev = NULL;
	if (!*head)
	{
		*head = newNode;
		newNode->next = NULL;
	}
	else
	{
		newNode->next = *head;
		(*head)->prev = newNode;
		*head = newNode;
	}
	return (newNode);
}
