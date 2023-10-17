#include "main.h"
/**
 * main - reverse a string
 * Return: reverse string
 */
void rev_string(char *s)
{
	char a = s[0];
	int i = 0;
	int j;

	while (s[i] != '\0')
		i++;
	for (j = 0; j < i; j++)
	{
		i--;
		a = s[j];
		s[j] = s[i];
		s[i] = a;
	}
}
