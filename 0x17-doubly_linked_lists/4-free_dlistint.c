#include "lists.h"

/**
 * free_dlistint - function
 * @head: parameter
 * Return: Value
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *currentNode;

	while (head != NULL)
	{
		currentNode = head;
		head = head->next;
		free(currentNode);
	}
}
