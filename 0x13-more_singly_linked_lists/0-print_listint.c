#include "lists.h"

/**
 * print_listint - Function
 * @h: Parameter
 *
 * Return: A value.
 */

size_t print_listint(const listint_t *h)
{
	size_t number = 0;

	while (h)
	{
		printf("%d\n", h->n);
		number++;
		h = h->next;
	}

	return (number);
}
