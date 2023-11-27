#include "main.h"
/**
 * read_printfile - reads a text file and prints it
 * @filename: filename
 * @letters: number of letters to read
 * Return: number of letters, 0 if failed
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int i;
	char *a;
	ssize_t s, o;

	if (filename == NULL)
		return (0);

	i = open(filename, O_RDONLY);

	if (i == -1)
		return (0);

	a = malloc(sizeof(char) * letters);
	if (a == NULL)
	{
		close(i);
		return (0);
	}
	s = read(i, a, letters);
	close(i);
	if (s == -1)
	{
		free(a);
		return (0);
	}
	o = write(STDOUT_FILENO, a, s);
	free(a);
	if (s != o)
		return (0);
	return (o);
}
