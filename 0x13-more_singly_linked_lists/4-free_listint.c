#include "lists.h"
/**
 * free_listint -  frees a listint_t list
 * @head: a pointer
 */
void free_listint(listint_t *head)
{
	listint_t *p;

	while (head)
	{
		p = head->next;
		free(head);
		head = p;
	}
}
