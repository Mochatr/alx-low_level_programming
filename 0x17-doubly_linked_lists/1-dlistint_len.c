#include "lists.h"

/**
 * dlistint_len - function
 * @h: parameter
 * Return: size of the list
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t count = 0;

	while (h)
	{
		count++;
		h = h->next;
	}
	return (count);
}
