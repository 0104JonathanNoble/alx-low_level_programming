#include "main.h"
/**
 * main - concatenate two strings
 * append src to dest
 * Return: void
 */
char *_strcat(char *dest, char *src)
{
	int i = 0;
	int j = 0;
	int k;

	for (k = 0; dest[k] != '\0'; k++)
		i++;
	for (k = 0; src[k] != '\0'; k++)
		j++;
	for (k = 0; k <= j; k++)
		dest[i + k] = src[i];
	return (dest);
}
