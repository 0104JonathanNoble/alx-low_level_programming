#include <main.h>
/**
 * main - check lowercase character
 * Return: 1 if true, return 0 otherwise
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
