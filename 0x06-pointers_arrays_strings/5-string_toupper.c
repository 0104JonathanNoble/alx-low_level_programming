#include "main.h"
/**
 * main - change lowercase to uppercase
 * Return: string
 */
char *string_toupper(char *a)
{
	int i;

	i = 0;
	while (a[i] != '\0')
	{
		if (a[i] >=
