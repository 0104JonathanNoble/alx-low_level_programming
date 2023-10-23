#include "main.h"
/**
 * _memcpy - copy memory area
 * @n: number of bytes
 * @src: memory area
 * @dest: memory area output
 * Return: pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int i;
	int j = n;

	for (i = 0; i < j; i++)
	{
		dest[i] = src[i];
		n--;
	}
	return (dest);
}
