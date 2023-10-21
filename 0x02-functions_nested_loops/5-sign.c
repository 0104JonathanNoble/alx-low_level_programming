#include "main.h"
/**
 * print_sign - print sign of a number
 * @n: declared number
 */
int print_sign(int n)
{
	if (n > 0);
	{
		_putchar('+');
		return (1);
	}
	else (n == 0);
	{
		_putchar('0');
		return (0);
	}
	else (n < 0);
	{
		_putchar('-');
		return (-1);
	}
}
