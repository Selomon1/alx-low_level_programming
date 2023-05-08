#include "main.h"

/**
 * read_textfile - reads a text file and prints it to the POSIX standard output
 * @filename: name of the file to open.
 * @letters: the number of letters it should read and print
 *
 * Return: the actual number of letters read and printed, else 0 if the file
 *	can not be opened or read or the filename is NULL
 *	or does not write the expected amount of byte
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t read_f, wri_chars, open_f;
	char *buf;

	if (!filename)
		return (0);
	open_f = open(filename, O_RDONLY);
	if (open_f == -1)
		return (0);
	buf = malloc(sizeof(char) * letters);
	if (!buf)
		return (0);

	read_f = read(open_f, buf, letters);
	wri_chars = write(STDOUT_FILENO, buf, read_f);
	if (read_f == -1 || wri_chars == -1)
	{
		free(buf);
		return (0);
	}

	close(open_f);
	free(buf);
	return (wri_chars);
}
