/* this function frees a doubly linked list */

#include "lists.h"

/**
 * free_dlistint-function that frees a linked list
 * @head: pointer to the list
 * Return: void
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *ptr;

	if (head)
	{
		while (head->next != NULL)
		{
			ptr = head;
			head = head->next;
			free(ptr);
		}
		free(head);
	}
}
