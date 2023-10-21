#include "main.h"

/**
 * _islower - check for lowercase character
 * @c: int
 * Return: 1 if true, return 0 otherwise
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
