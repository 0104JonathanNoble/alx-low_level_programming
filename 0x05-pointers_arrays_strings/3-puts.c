#include "main.h"
/**
 * main - print a string
 * Return - stdout
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		-putchar(*str++);
	}
	_putchar('\n');
}
