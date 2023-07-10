#include "main.h"

/**
 * create_file - create a file
 * @filename: name of the file to create
 * @text_content: a NULL terminated string to write to the file
 *
 * Return: 1 on success, -1 on failure
 */

int create_file(const char *filename, char *text_content)
{
	int open_f, wri_f;
	int str_len = 0;

	if (filename == NULL)
		return (-1);
	open_f = open(filename, O_CREAT | O_TRUNC | O_RDWR, 0600);
	if (text_content != NULL)
		for (str_len = 0; text_content[str_len]; str_len++)
			;
	wri_f = write(open_f, text_content, str_len);
	if (open_f == -1 || wri_f == -1)
		return (-1);
	close(open_f);
	return (1);
}

