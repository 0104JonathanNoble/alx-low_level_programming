#include "main.h"
/**
 * read_printfile - reads a text file and prints it
 * @filename: filename
 * @letters: number of letters to read
 * Return: number of letters, 0 if failed
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int i, l, j, k;
	char *a;

	if (filename == NULL)
		return (0);

	i = open(filename, O_RDONLY);

	if (i == -1)
		return (0);

	a = malloc(sizeof(char) * letters);
	if (!a)
		return (0);
	read(i, a, letters);
	a[letters] = '\0';
	
	for (j = 0; a[j] != '\0'; j += 1)
		l += 1;
