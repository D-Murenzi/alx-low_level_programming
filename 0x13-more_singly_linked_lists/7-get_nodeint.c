/* this function returns a nth node in the list */

#include <stdio.h>
#include "lists.h"

/**
 * get_nodeint_at_index-gets a pointer to a node at certain index
 * @head:pointer to the list
 * @index: the index of the node to get
 * Return: pointer to the node
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int a;
	listint_t *ptr;

	ptr = head;
	a = 0;
	while (a <= index)
	{
		a++;
		if (ptr == NULL)
		{
			return (NULL);
		}
		ptr = ptr->next;
	}
	return (ptr);
}
