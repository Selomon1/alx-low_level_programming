#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#define BUF_SIZE 1024

int main(int argc, char *argv[]);
void close_file(int fdv);

/**
 * main - copies the content of a file to another file
 * @argc: number of arguments passed to the function
 * @argv: two files
 *
 * Return: an integer number
 */

int main(int argc, char *argv[])
{
	int input_fdv, output_fdv, read_bytes, wri_bytes;
	char text[BUF_SIZE];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	input_fdv = open(argv[1], O_RDONLY);
	if (input_fdv == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	output_fdv = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (output_fdv == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
	while ((read_bytes = read(input_fdv, text, BUF_SIZE)) > 0)
	{
		wri_bytes = write(output_fdv, text, read_bytes);
		if (wri_bytes == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			exit(99);
		}
	}
	if (read_bytes == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	close_file(input_fdv);
	close_file(output_fdv);
	return (0);
}

/**
 * close_file - close the opened file
 * @fdv: file descriptor
 *
 * Return: None
 */

void close_file(int fdv)
{
	if (close(fdv) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close %i\n", fdv);
		exit(100);
	}
}
