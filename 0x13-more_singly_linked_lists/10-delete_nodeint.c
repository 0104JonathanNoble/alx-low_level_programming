#include "lists.h"
/**
 * delete_nodeint_at_index - deletes the node at index index of a listint_t linked list
 * @head: a pointer
 * @index: index
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i;
	listint_t *t, *p;

	if (head == NULL || *head == NULL)
		return (-1);
	if (index == 0)
	{
		next = (*head)->next;
		free(*head);
		*head = next;
		return (1);
	}
	t = *head;
	for (i = 0; i < index - 1; i++)
	{
		if (t->next == NULL)
			return (-1);
		t = t->next;
	}
	next = t->next;
	t->next = nex->next;
	free(next);
	return (1);
}
