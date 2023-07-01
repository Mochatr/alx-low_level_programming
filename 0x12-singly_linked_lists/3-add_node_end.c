#include <stdio.h>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * add_node_end - Function
 * @head: Parameter
 * @str: Parameter
 *
 * Return: Value
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *New;
	list_t *Temp = *head;

	unsigned int len = 0;

	while (str[len])
		len++;

	New = malloc(sizeof(list_t));
	if (!New)
	{
		return (NULL);
	}

	New->str = strdup(str);
	New->len = len;
	New->next = NULL;

	if (*head == NULL)
	{
		*head = New;
		return (New);
	}

	while (Temp->next)
	{
		Temp = Temp->next;
	}

	Temp->next = New;

	return (New);
}
