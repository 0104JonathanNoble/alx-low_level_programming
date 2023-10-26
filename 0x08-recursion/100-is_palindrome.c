#include "main.h"
/**
 * is_palindrome - function return value if a string is palindrome
 * @s: string char
 * @i: iterator
 * @l: length of the string
 * Return: 1 if palindrome otherwise return 0
 */
int is_palindrome(char *s, int i, int l)
{
	if (*(s + i) != *(s + l - 1))
		return (0);
	if (i >= l)
		return (1);
	return (is_palindrome(s, i + 1, l - 1));
}
