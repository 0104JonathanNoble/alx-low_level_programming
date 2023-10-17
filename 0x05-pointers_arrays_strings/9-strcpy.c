#include "main.h"
/**
 * main - copies string pointed to src
 * include terminating null byte (\0)
 * Return: pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int i = -1;

	do
	{
		i++;
		dest[i] = src[i];
	} while (src[i] != '\0');
	return (dest);
}
