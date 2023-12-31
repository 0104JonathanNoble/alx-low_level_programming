#include "main.h"
#include <stdlib.h>
/**
 * create_array - creates an array of chars
 * @size: size of array
 * @c: assigned char
 * Return: pointer to array, otherwise NULL if it fails
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *a;

	a = malloc(sizeof(char) * size);
	if (size == 0 || a == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		a[i] = c;
	return (a);
}
