#include "lists.h"

/**
 * add_dnodeint_end - function
 * @head: parameter
 * @n: parameter
 * Return: Value
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *newNode = malloc(sizeof(dlistint_t)), *currentNode;

	if (!head || !newNode)
		return (newNode ? free(newNode), NULL : NULL);

	newNode->n = n;
	newNode->next = NULL;
	if (!*head)
	{
		newNode->prev = NULL;
		*head = newNode;
	}
	else
	{
		currentNode = *head;
		while (currentNode->next)
			currentNode = currentNode->next;

		currentNode->next = newNode;
		newNode->prev = currentNode;
	}
	return (newNode);
}
