#include "main.h"
/**
 * print_square - function prints a square
 * @size: size of the square
 * use '#' to print square
 * Return: print only new line if size is 0 or less
 */
void print_square(int size)
{
	int i, j;

	j = 0;

	if (size < 1)
		_putchar('\n');
	while (j < size)
	{
		i = 0;
		while (i < size)
		{
			_putchar('#');
			i++;
		}
		_putchar('\n');
		j++;
	}
}
