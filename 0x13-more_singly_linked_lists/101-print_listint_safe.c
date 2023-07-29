#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

size_t count_nodes(const listint_t *head);

/**
 * count_nodes - Function
 * @head: argument
 * Return: value
 */

size_t count_nodes(const listint_t *head)
{
	size_t Count = 0;

	while (head != NULL)
	{
		Count++;
		head = head->next;
	}
	return (Count);
}

/**
 * print_listint_safe - Function
 * @head: argument
 * Return: value
 */

size_t print_listint_safe(const listint_t *head)
{
	size_t Count = 0;
	const listint_t *Current = head;
	const listint_t *loop_Node = NULL;

	while (Current != NULL)
	{
		printf("[%p] %d\n", (void *)Current, Current->n);
		Count++;

		if (Current >= Current->next)
		{
			loop_Node = Current->next;
			while (loop_Node >= Current)
			{
				Count++;
				printf("[%p] %d\n", (void *)loop_Node, loop_Node->n);
				if (loop_Node == Current)
				{
					break;
				}
				loop_Node = loop_Node->next;
			}
			break;
		}
		Current = Current->next;
	}

	printf("-> [%p] %d\n", (void *)Current, Current->n);
	Count++;

	return (Count);
}

