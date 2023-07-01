#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"


/**
 * add_node - Function
 * @head: Argument
 * @str: Argument
 *
 * Return: value
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *New;
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
	New->next = (*head);
	(*head) = New;

	return (*head);
}



