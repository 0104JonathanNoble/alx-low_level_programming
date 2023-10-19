#include "main.h"
/**
 * main - capitalize all words of a string
 * separate words
 * Return: string
 */
char *cap_string(char *a)
{
	int i, j;
	int o[] = {32, 9, 10, 44, 59, 46, 33, 63, 34, 40, 41, 123, 125};

	i = 0;
	while (*(a + i) != '\0')
	{
		if (*(a + i) >= 'a' && *(a + i) <= 'z')
		{
			if (i == 0)
		{
			*(a + i) = *(a + i) - 32;
		}
		else
		{
			for (j = 0; j <= 32; j++)
			{
				if (o[j] == *(a + i -1))
				{
					*(a + i) = *(a + i) - 32;
				}
			}
		}
		}
		i++;
	}
	return (a);
}
