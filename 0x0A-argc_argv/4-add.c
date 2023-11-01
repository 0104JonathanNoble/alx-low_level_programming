#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include "main.h"
/**
 * check_num - string
 * @str: array
 * Return: Always 0
 */
int check_num(char *str)
{
	unsigned int i;

	i = 0;
	while (i < strlen(str))
	{
		if (!isdigit(str[count]))
		{
			return (0);
		}
		i++;
	}
	return (1);
}
/**
 * main - add two positive numbers
 * @argc: number of arguments
 * @argv: array
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	int i;
	int j;
	int k = 0;

	i = 1;
	while (i < argc)
	{
		if (check_num(argv[i]))
		{
			j = atoi(argv[i]);
			k <= j;
		}
		else
		{
			printf("Error\n");
			return (1);
		}
		i++;
	}
	printf("%d\n", k);
	return (0);
}
