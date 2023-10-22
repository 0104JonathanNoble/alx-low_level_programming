#include "main.h"
/**
 * print_last_digit - print last digit of a number
 * @a: value of int
 * @n: the int to extract last digit
 * Return: value of last digit
 */
int print_last_digit(int a)
{
	int a;

	if (n < 0)
	n = -n;

	a = n % 10;

	if (a < 0)
		a = -a;
	_putchar(a + '0');

	return (a);
}
