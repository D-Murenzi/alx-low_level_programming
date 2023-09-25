/*this function prints all the elements of list_t list which is a linked list*/

#include <stdio.h>
#include "lists.h"

/**
 *print_listint-prints all the elements of a list
 * @h: pointer to the list
 * Return: number of nodes in the list
 */

size_t print_listint(const listint_t *h)
{
	int a;
	const listint_t *ptr;

	if (h == NULL)
	{
		return (0);
	}
	ptr = h;
	a = 0;
	while (ptr->next != NULL)
	{
		ptr = ptr->next;
		a++;
		printf("%d\n", ptr->n);
	}
	return (a);
}
