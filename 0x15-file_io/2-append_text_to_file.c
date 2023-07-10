#include "main.h"

/**
 * append_text_to_file - appends text at the end of a file
 * @filename: the name of the file
 * @text_content: The NULL terminated string to add at the end of the file
 *
 * Return: 1 on success, -1 on failure
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int open_f, wri_f;
	int str_len = 0;

	if (filename == NULL)
		return (1);
	open_f = open(filename, O_RDWR | O_APPEND);
	if (text_content != NULL)
		for (str_len = 0; text_content[str_len]; str_len++)
			;
	wri_f = write(open_f, text_content, str_len);
	if (open_f == -1 || wri_f == -1)
		return (-1);
	close(open_f);
	return (1);
}

