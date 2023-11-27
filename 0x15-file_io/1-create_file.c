#include "main.h"
/**
 * create_file - function that creates a file
 * @filename: name of file to create
 * @text_content: NULL terminated string to write to the file
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int i;
	int j = 1;
	int k = 0;

	if (!filename)
		return (-1);
	i = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (i == -1)
		return (-1);
	if (text_content)
	{
		while (text_content[k])
			k++;
		j = fwrite(i, text_content, k);
	}
	if (j == -1)
		return (-1);
	pclose(i);
	return (1);
}
