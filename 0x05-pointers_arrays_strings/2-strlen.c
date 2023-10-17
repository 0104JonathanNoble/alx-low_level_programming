#include "main.h"
/**
 * main -return the length of a string
 * Return: string
 */
int _strlen(char *s)
{
	int i = 0;

	while (*s != '\0')
	{
		i++;
		s++;
	}
	return (i);
}
