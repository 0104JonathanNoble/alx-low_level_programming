#include "main.h"
/**
 * print_line - print straight line
 * @n: the number of times _ is printed
 * line should end with \n
 * Return: \n if n is 0 or less
 */
void print_line(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int i;

		for (i = 1; i <= n; i++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
}
