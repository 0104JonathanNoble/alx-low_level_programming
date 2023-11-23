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
	int o = 0;

	for (i = 63; i >= 0; i--)
	{
		j = k >> i;
		if (j & 1)
			o++;
	}
	return (o);
}
