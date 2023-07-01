#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * list_len - Function
 * @h: Argument
 * Return: Value
 */

size_t list_len(const list_t *h)
{
	size_t a = 0;

	while (h)
	{
		a++;
		h = h->next;
	}
	return (a);
}
