#include "main.h"
/**
 * main - print alphabet
 * Return: 1 if c is lowercase or upper, 0 if otherwise
 */
int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
