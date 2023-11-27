#include "main.h"

/**
 * append_text_to_file - appends text at the end of a file.
 * @filename: the file pointer
 * @text_content: NULL terminated string to write to the file
 * Return: 1 on success, -1 on failure
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int o, w, len = 0;

	if (filename == NULL)
		return (-1);
	if (text_content != NULL)
	{
		for (len = 0; text_content[len] != '\0';)
			len++;
	}
	o = open(filename, O_APPEND | O_RDWR, 0664);
	w = write(o, text_content, len);

	if (o < 0 || w < 0)
		return (-1);
	close(o);
	return (1);
}
