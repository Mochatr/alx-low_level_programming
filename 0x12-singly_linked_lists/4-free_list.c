#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 * free_list - Function
 * @head: Argument
 */

void free_list(list_t *head)
{
	list_t *Temp;

	while (head)
	{
		Temp = head->next;
		free(head->str);
		free(head);
		head = Temp;
	}
}
