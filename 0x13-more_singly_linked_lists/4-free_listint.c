/* this function frees a linked list*/

#include <stdio.h>
#include "lists.h"

/**
 * free_listint-function that frees a linked list
 * @head:pointer to the list
 * Return: void
 */

void free_listint(listint_t *head)
{
	listint_t *ptr;

	while (head != NULL)
	{
		ptr = head;
		head = head->next;
		free(ptr);
	}

}
