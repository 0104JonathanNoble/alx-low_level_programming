#include <stdlib.h>
#include "main.h"
/**
 * _calloc - allocates memory for a array
 * @nmemb: array of elements
 * @size: size of bytes
 * Return: pointer, if 0 return NULL
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *a;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);
	a = malloc(nmemb * size);

	if (a == NULL)
		return (NULL);
	for (i = 0; i < (nmemb * size); i++)
		a[i] = 0;
	return (a);
}
