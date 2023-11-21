#include "lists.h"
/**
 * pop_listint - deletes the head node of a listint_t linked list
 * @head: a pointer
 * Return: the head node’s data (n)
 */
int pop_listint(listint_t **head)
{
	listint_t *s;
	int i;

	if (head == NULL || *head == NULL)
		return (0);
	s = *head;
	*head = s->next;
	i = start->i;
	free(s);
	return (i);
}
