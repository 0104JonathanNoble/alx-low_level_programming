#include "main.h"
/**
 * _strchr - locate a character in a string
 * @s: the string for characters
 * @c: first occurence of a character
 * Return: pointer to the first occurence if c is found. Otherwise return NULL
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
