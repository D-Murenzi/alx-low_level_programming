/* this function frees a linked list and sets a pointer to the pointer*/
/* to the list to null */

#include <stdio.h>
#include "lists.h"

/**
 * free_listint2- frees a whole linked list and sets head to null
 * @head: a pointer to a pointer to the list
 * Return: void
 */

void free_listint2(listint_t **head)
{
	listint_t *ptr;

	while ((*head) != NULL)
	{
		ptr = *head;
		*head = (*head)->next;
		free(ptr);
	}
	head = NULL;
}
