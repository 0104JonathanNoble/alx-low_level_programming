#include "main.h"
/**
 * _strchr - locate a character in a string
 * @c: first occurence of a character
 * @s: string which holds character
 * Return: Always 0
 */
char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
			return (&s[i]);
	}
	return (0);
}
