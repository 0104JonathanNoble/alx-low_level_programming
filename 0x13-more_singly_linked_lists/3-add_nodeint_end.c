#include "lists.h"
/**
 * add_nodeint_end - adds a new node at the end of a listint_t list
 * @head: a pointer
 * @n: integer
 * Return: the address of the new element, or NULL if it failed
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *t, *u;

	t = malloc(sizeof(listint_t));
	if (t == NULL)
		return (NULL);
	t->n = n;
	t->next = NULL;

	if (*head == NULL)
		*head = t;
	else
	{
		u = *head;
		while (u->next != NULL)
			u = u->next;
		u->next = t;
	}
	return (*head);
}
