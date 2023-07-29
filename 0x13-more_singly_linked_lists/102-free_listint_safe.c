#include "lists.h"
#include <stdio.h>

/**
 * free_listint_safe - function
 * @h: Parameter
 * Return: A value
 */

size_t free_listint_safe(listint_t **h)
{
	size_t len = 0;
	int Diff;

	listint_t *tmp;

	if (!h || !*h)
	{
		return (0);
	}

	while (*h)
	{
		Diff = *h - (*h)->next;
		if (Diff > 0)
		{
			tmp = (*h)->next;
			free(*h);
			*h = tmp;
			len++;
		}
		else
		{
			free(*h);
			*h = NULL;
			len++;
			break;
		}
	}

	*h = NULL;
	return (len);
}
