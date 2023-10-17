#include "main.h"
/**
 * main - copies string pointed to src
 * include terminating null byte (\0)
 * Return: pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;
	int j = 0;

	while (*(src + 1) != '\0')
	{
		i++;
	}
	for ( ; j < i; j++)
	{
		dest[j] = src[i];
	}
	dest[i] = '\0';
	return (dest);
}
