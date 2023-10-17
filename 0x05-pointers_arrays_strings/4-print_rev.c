#include "main.h"
/**
 * main - print a string in reverse
 * Return: string
 */
void print_rev(char *s)
{
	int i = 0;

	while (s[i])
		i++;
	while (i--)
		_putchar(s[i]);
	_putchar9('\n');
}
