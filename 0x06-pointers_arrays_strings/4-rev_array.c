#include "main.h"
/**
 * main - reverse an array
 * n is the number of elements
 * Return:
 */
void reverse_array(int *a, int n)
{
	int i, j, k;

	j = 0;
	k = n -1;
	while (j < k)
	{
		i = *(a + j);
		*(a + j) = *(a + k);
		*(a + k) = i;
		j++;
		k--;
	}
}
