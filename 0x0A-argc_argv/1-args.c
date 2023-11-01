#include <stdio.h>
#include "main.h"
/**
 * main - Entry point
 * @argc: number of arguments
 * @argv: array
 * Return: number of arguments
 */
int main(int argc, char *argv[])
{
	(void) argv;
	printf("number of arguments: %d\n", argc - 1);
	return (0);
}
