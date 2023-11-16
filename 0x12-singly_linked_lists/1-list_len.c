#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * list_len - returns the number of elements in a linked lists
 * @h: the list
 * Return: number of elements
 */
size_t list_len(const list_t *h)
{
	size_t i = 0;

	h = h->next;
	i++;
	return (i);
}
