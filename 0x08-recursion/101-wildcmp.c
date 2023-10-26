#include "main.h"
/**
 * wildcmp - compare two strings
 * @s1: first pointer
 * @s2: second pointer
 * Return: 1 if strings are identical, otherwise 0
 */
int wildcmp(char *s1, char *s2)
{
	if (*s2 == '\0')
	{
		if (*s2 != '\0' && *s2 == '*')
		{
			return (wildcmp(s1, s2 + 1));
		}
		return (*s2 == '\0');
	}
	if (*s2 == '*')
	{
		return (wildcmp(s1 + 1, s2) || wildcmp(s1, s2 + 1));
	}
	else if (*s1 == *s2)
	{
		return (wildcmp(s1 + 1, s2 + 1));
	}
	return (0);
}
