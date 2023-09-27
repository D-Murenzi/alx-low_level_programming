/*this function deletes a node at indicated index*/

#include <stdio.h>
#include "lists.h"

/**
 * delete_nodeint_at_index-deletes a node at certain index
 * @head: pointer to the pointer to linked list
 * @index:index of the node to delete
 * Return: 1 if success or -1 if fails
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *ptr;
	unsigned int a;
	listint_t *new;

	if (index == 0)
	{
		free(*head);
		head = NULL;
		return (1);
	}
	a = 0;
	ptr = *head;
	while (a != index)
	{
		if (ptr != NULL)
		{
			ptr = ptr->next;
		}
		else
		{
			return (-1);
		}
		a++;
	}
	if (ptr)
	{
		new = ptr;
		ptr = ptr->next;
		free(new);
		return (1);
	}
	return (-1);
}
