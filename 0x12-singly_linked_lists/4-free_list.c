#include <stdlib.h>
#include "lists.h"
/**
 * free_list - free a list
 * @head: head of list
 * Return: nothing
 */
void free_list(list_t *head)
{
	list_t *la;

	while ((la = head) != NULL)
	{
		head = head->next;
		free(la->str);
		free(la);
	}
}
