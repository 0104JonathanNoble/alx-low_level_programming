#include "main.h"
/**
 * main - change lowercase to uppercase
 * Return: string
 */
char *string_toupper(char *b)
{
	int i;

	i = 0;
	while (b[i] != '\0')
	{
		if (b[i] >= 'a' && b[i] <= 'z')
			b[i] = b[i] - 32;
		i++;
	}
	return (b);
}
