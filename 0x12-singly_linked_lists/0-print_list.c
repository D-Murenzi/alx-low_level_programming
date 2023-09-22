/*this function prints all the elements of list_t list which is a linked list*/
#include <stdio.h>
#include "lists.h"
#include <stdlib.h>

/**
 * _strlen-calcluates the lenght of the string
 * @str:pointer to the  string
 * Return: lenth of the string
 */

unsigned int _strlen(char *str)
{
	unsigned int a;

	if (str == 0)
	{
		return (0);
	}
	a = 0;
	while(*str != '\0')
	{
		a++;
		str++;
	}
	return (a);
}

/**
 * print_list-function to print elements of list
 * @h: pointer to the linked list
 * Return: number of nodes of the linked lists
 */

size_t print_list(list_t *h)
{
	if (h != NULL)
	{
		int numbers;
		list_t *ptr;

		numbers = 0;
		ptr = h;
		while (ptr != NULL)
		{
			numbers++;

			if (ptr->str != NULL)
			{
				ptr->len = _strlen(ptr->str);
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
