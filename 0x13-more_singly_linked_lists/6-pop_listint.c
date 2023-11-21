#include "lists.h"
/**
 * pop_listint - deletes the head node of a listint_t linked list
 * @head: a pointer
 * Return: the head node’s data (n)
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
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
