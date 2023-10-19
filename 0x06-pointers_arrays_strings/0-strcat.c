#include "main.h"
#include <stdio.h>
/**
 * main - concatenate two strings
 * append src to dest
 * Return: void
 */
char *_strcat(char *dest, char *src)
{
	int i = -1, j;

	for (j = 0; dest[j] != '\0'; j++);
	do {
		i++;
		desti[j] = src[i];
		j++;
	} while (src[i] != '\0');
	return (dest);
}
