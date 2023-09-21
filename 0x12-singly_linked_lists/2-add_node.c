/* this function add a new node at the beginning of the list*/
#include "lists.h"
#include <stdio.h>
/**
 * add_node-adds new node at the beginning of the list
 * @head: pointer to the first node
 * @str: pointer to the string to input in the new node
 * Return: pointer to the new node
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *ptr;

	ptr = malloc(sizeof(list_t));
	if (ptr == NULL)
	{
		return (NULL);
	}
	ptr->next = *head;
	ptr->str = strdup(str);
	*head = ptr;
	return (ptr);
}
