#include "lists.h"

/**
 * get_nodeint_at_index - Function
 * @head: Parameter
 * @index: Parameter
 *
 * Return: A value
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int a = 0;
	listint_t *Temp = head;

	while (Temp && a < index)
	{
		Temp = Temp->next;
		a++;
	}

	return (Temp ? Temp : NULL);
}
