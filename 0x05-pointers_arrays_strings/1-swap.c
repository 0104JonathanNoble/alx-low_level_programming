#include "main.h"
/**
 * main - swap value of two integers
 * Return: a and b
 */
void swap_int(int *a, int *b)
{
	int i;

	i = *a;
	*a = *b;
	*b = i;
}
