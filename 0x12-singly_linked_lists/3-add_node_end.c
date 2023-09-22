/* this function adds a node at the end of the linked lists*/

#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * add_node_end-add a node at the end of the list
 * @head: pointer to the pointer containing the list
 * @str: the string to include in the node
 * Return: pointer to the new list
 */

list_t *add_node_end(list_t **head, const char *str)
{
	if (head != NULL)
	{
		list_t *ptr;

		ptr = *head;
		while (ptr->next != NULL)
		{
			ptr = ptr->next;
		}

		ptr->next = malloc(sizeof(list_t));
		if (ptr->next != NULL)
		{
			ptr = ptr->next;
			ptr->str = strdup(str);
			ptr->next = NULL;

			return (ptr);
		}
		else
		{
			return (NULL);
		}
	}
	return (NULL);
}
