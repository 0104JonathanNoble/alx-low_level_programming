#include "main.h"
/**
 * print_numbers - print numbers 0 to 9
 * on a new line
 * Return: output
 */
void print_numbers(void)
{
	char c;

	for (c = '0'; c <= '9'; c++)
	{
		_putchar(c);
	}
	_putchar('\n');
}
