#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * find_listint_loop - Function
 * @head: parameter
 * Return: value
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *Slow = head, *Fast = head;

	while (Fast != NULL && Fast->next != NULL)
	{
		Slow = Slow->next;
		Fast = Fast->next->next;
		if (Slow == Fast)
		{
			Slow = head;
			while (Slow != Fast)
			{
				Slow = head;
				while (Slow != Fast)
				{
					Slow = Slow->next;
					Fast = Fast->next;
				}
				return (Slow);
			}
		}
	}
	return (NULL);
}
