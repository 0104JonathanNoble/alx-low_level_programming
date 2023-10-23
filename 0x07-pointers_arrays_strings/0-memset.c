#include "main.h"
/**
 * _memset - fill memory with a constant byte
 * @n: fill the value first
 * @s: address of memory
 * @b: the output value
 * Return: pointer to the memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i;

	for (i = 0; n > 0; i++)
	{
		s[i] = b;
		n--;
	}
	return (s);
}
