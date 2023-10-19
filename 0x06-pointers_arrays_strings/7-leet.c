#include "main.h"
/**
 * main - encode a string int 1337
 * replace char with int
 * Return: string
 */
char *leet(char *z)
{
        char s1[] = "aeotlAEOTL";
        char s2[] = "4307143071";
        int i;
	int j;

	for (i = 0; z[i] != '\0'; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (z[i] == s1[j])
			{
				z[i] = s2[j];
			}
		}
	}
	return (z);
}
