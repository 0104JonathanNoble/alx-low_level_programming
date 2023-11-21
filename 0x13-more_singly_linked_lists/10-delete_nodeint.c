#include "lists.h"
/**
 * delete_nodeint_at_index - deletes the node at index
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
		p = (*head)->p;
		free(*head);
		*head = p;
		return (1);
	}
	t = *head;
	for (i = 0; i < index - 1; i++)
	{
		if (t->p == NULL)
			return (-1);
		t = t->p;
	}
	p = t->p;
	t->p = p->p;
	free(p);
	return (1);
}
