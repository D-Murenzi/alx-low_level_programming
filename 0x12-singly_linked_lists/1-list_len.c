/* this function return number of elements in a linked list*/
#include <stdio.h>
#include "lists.h"

/**
 * list_len-calculates the number of elts in a list
 * @h: thepointer to the list
 * Return: number of the elts in the list
 */

size_t list_len(const list_t *h)
{
	if (h != NULL)
	{
		int n;
		const list_t *ptr;

		n = 0;
		ptr = h;
		while (ptr != NULL)
		{
			n++;
			ptr = ptr->next;
		}
		return (n);
	}
	exit(98);
}
