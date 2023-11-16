#include "lists.h"
/**
 * add_node - adds new node at beginning
 * @head: linked list
 * @str: a string
 * Return: the address of the new element, or NULL if it failed
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *i;
	int l = 0;

	i = malloc(sizeof(list_t));
	if (i == NULL)
		return (NULL);

	while (str[l])
		l++;
	i->l = l;
	i->str = strdup(str);
	i->next = *head;
	*head = i;
	return (i);
}
