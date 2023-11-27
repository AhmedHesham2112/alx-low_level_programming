#include "main.h"

/**
 * read_textfile - reads a text file and prints it to the POSIX standard output
 * @filename: the file pointer
 * @letters: the number of letters to be printed
 * Return: actual number of letters or 0 of failed
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t o, r, w;
	char *temp;

	if (filename == NULL)
		return (0);

	temp = malloc(sizeof(char) * letters);
	if (temp == NULL)
		return (0);

	o = open(filename, O_RDONLY);
	r = read(o, temp, letters);
	w = write(STDOUT_FILENO, temp, r);

	if (o == -1 || r == -1 || w == -1 || w != r)
	{
		free(temp);
		return (0);
	}

	free(temp);
	close(o);
	return (w);
}
