#include "main.h"

/**
 * create_file - creates a file
 * @filename: name of the the file to create
 * @text_content: a NULL terminated string to write to the file
 * Return: 1 on success, -1 on failure
 * created file should have 600 permission
 */
int create_file(const char *filename, char *text_content)
{
	int o, w, length;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (length = 0; text_content[length];length++)
			;
	}

	o = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	w = write(0, text_content, length);

	if (o == -1 || w == -1)
		return (-1);

	close(o);

	return (1);
}
