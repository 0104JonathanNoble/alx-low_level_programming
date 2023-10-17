#include "main.h"
/**
 * main - print a string in reverse
 * Return: string
 */
void print_rev(char *s)
{
	int i = 0;
	int j;

	while (*s != '\0')
	{
		i++;
		s++;
	}
	s--;
	for (j = i; j > 0; j--)
	{
		_putchar(*s);
	}
	_putchar('\n');
}
