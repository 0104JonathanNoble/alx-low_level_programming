#include "main.h"
/**
 * flip_bits - return number of bits
 * @n: value
 * @m: 2nd value
 * Return: number of bits
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int i;
	unsigned long int j;
	unsigned long int k = n ^ m;

	o = 0;

	for (a = 63; a >= 0; i--)
	{
		j = k >> i;
		if (j & 1)
			o++;
	}
	return (o);
}
