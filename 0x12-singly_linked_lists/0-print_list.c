/*this function prints all the elements of list_t list which is a linked list*/

#include <stdio.h>
#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
 * print_list-function to print elements of list
 * @h: pointer to the linked list
 * Return: number of nodes of the linked lists
 */

size_t print_list(const list_t *h)
{
	if (h != NULL)
	{
		int numbers;
		const list_t *ptr;

		numbers = 0;
		ptr = h;
		while (ptr != NULL)
		{
			numbers++;

			if (ptr->str != NULL)
			{
				printf("[%d] %s\n", ptr->len, ptr->str);
			}
			else
			{
				printf("[0] (nil)\n");
			}
			ptr = ptr->next;
		}
		return (numbers);
	}
	else
	{
		return (0);

	}
}
