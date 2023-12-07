/* this functions prints all the elemets of double*/
/* linked lists*/
# include "lists.h"
# include <stdio.h>

/**
 * print_dlistint-function that prints all member elts of dlist
 * @h: the pointer to the doublely linked list
 * Return: number of node the list has
 */

size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *ptr;
	size_t a;

	ptr = h;
	a = 0;
	while (ptr != NULL)
	{
		a++;
		printf("%d\n", ptr->n);
		ptr = ptr->next;
	}
	return (a);
}
