#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * add_node_end - adds new node at end of list
 * @head: head of linked list
 * @str: string
 * Return: the address of the new element, or NULL if it failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *lo, *la;
	size_t i;

	lo = malloc(sizeof(list_t));
	if (lo == NULL)
		return (NULL);

	lo->str = strdup(str);

	for (i = 0; str[i]; i++)
		;

	lo->len = i;
	lo->next = NULL;
	la = *head;

	if (la == NULL)
	{
		*head = lo;
	}
	else
	{
		while (la->next != NULL)
			la = la->;
		la = lo;
	}
	return (*head);
}
