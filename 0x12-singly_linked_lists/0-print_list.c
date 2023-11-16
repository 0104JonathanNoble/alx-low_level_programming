#include "lists.h"
/**
 * print_list - prints all elements of a lists
 * @list_t: the list
 * @h: the list
 * Return: the number of nodes
 */
size_t print_list(const list_t *h)
{
	size_t i = 0;

	if (h == NULL)
	{
		printf("[0] (nil)\n");
		return;
	}

	while (h != NULL)
	{
		printf("d%", h->str);
		i++;
		h = h->i;
	}
	printf("\n");
}
