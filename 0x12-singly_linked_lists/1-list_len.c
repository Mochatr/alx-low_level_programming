#include <stdlib.h>

#include "list.h"

/**
 * list_len - Returns the number of elements in a linked list
 * @h: The pointer to the list_t list
 * Return: number of elements
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


