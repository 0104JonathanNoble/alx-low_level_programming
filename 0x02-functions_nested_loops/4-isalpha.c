#include "main.h"

/**
 * _isalpha - print alphabet
 * @c: print 1
 * Return: 1 if c is lowercase or upper, 0 if otherwise
 */
int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
