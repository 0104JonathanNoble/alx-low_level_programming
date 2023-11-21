#include "lists.h"
#include <stdlib.h>
/**
 * insert_nodeint_at_index - inserts a new node at a given position
 * @head: pointer
 * @idx: index
 * @n: new node
 * Return: the address of the new node, or NULL if it failed
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i;
	listint_t *t, *p;

	if (head == NULL)
		return (NULL);
	if (idx != 0)
	{
		t = *head;
		for (i = 0; i < idx - 1 && t != NULL; i++)
		{
			t = t->next;
		}
		if (t == NULL)
			return (NULL);
	}
	p = malloc(sizeof(listint_t));
	if (p == NULL)
		return (NULL);
	p->n = n;
	if (idx == 0)
	{
		p->next = *head;
		*head = p;
		return (p);
	}
	p->next = t->next;
	t->next = p;
	return (p);
}
