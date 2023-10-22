#include "main.h"
/**
 * print_sign - print sign of a number
 * @n: declared number
 * Return: 1 if n is greater than zero, 0 if equal and -1 otherwise
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar(48);
		return (0);
	}
	else if (n < 0)
	{
		_putchar('-');
	}
	return (-1);
}
