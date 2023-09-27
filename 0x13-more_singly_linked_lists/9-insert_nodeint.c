/* this function adds a new node at index as given*/

#include <stdio.h>
#include "lists.h"

/**
 * insert_nodeint_at_index-inserts anew node at a specific index
 * @head:pointer to a pointer conatining the list
 * @idx: the index to add the node
 * @n: interger to store in new node
 * Return: pointer to a new node
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *ptr;
	listint_t *new;
	unsigned int a;

	new = malloc(sizeof(listint_t));
	if (new != NULL)
	{
		new->n = n;
		new->next = NULL;
	}
	else
	{
		return (NULL);
	}

	ptr = *head;
	a = 0;
	while (a != idx)
	{
		if (ptr != NULL)
		{
			ptr = ptr->next;
		}
		else
		{
			return (NULL);
		}
		a++;
	}
	new->next = ptr->next;
	ptr->next = new;
	return (new);
}
