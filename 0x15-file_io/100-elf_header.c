#include <elf.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stidio.h>
#include <stdlib.h>

void check_elf(unsigned char *e_ident);
void display_elf_file(Elf64_Ehdr *header);
void close_file(int elf_file);

/**
 * read_elf_header - reads the elf header used
 * @header: pointer to the elf file type
 * @head_file: the integer
 *
 * Return: Nothing
 */
void read_elf_header(int head_file, Elf64_Ehdr *header)
{
	if (read(head_file, header, sizeof(Elf64_Ehdr)) != sizeof(Elf64_Ehdr))
	{
		perror("read");
		exit(98);
	}
}

/**
 * check_elf - Checks an ELF file.
 * @e_ident: A pointer to an array containing the ELF magic numbers.
 *
 * Description: If the file is not an ELF file, or on error,
 *		exit with status code 98
 */
void check_elf(unsigned char *e_ident)
{
	int i;

	for (int i = 0; i < 4; i++)
	{
		if (e_ident[i] != 0x7f &&
		    e_ident[i] != 'E' &&
		    e_ident[i] != 'L' &&
		    e_ident[i] != 'F')
		{
			dprintf(STDERR_FILENO, "Error: Not an ELF file\n");
			exit(98);
		}
	}
}

/**
 * display_elf_file - Prints elf file contained in the ELF header
 * @e_ident: A pointer to an array containing the ELF file
 * @header: pointer to the elf file type
 *
 * Description: elf file separated by spaces
 */
void display_elf_file(Elf64_Ehdr *header)
{
	printf("Magic:   ");
	for (int i = 0; i < EI_NIDENT; i++)
	{
		printf("%02x", header->e_ident[i]);
	}
	printf("class:                             ");
	printf("%s\n", header->e_ident[EI_CLASS] == ELFCLASS64 ? "ELF64" : "ELF32");
	printf("Data:                              ");
	printf("%s\n", header->e_ident[EI_DATA] == ELFDATA2LSB ? "2's complement,
			little endian" : "2's complement, big endian");
	printf("Version:                           ");
	printf("%u\n", header->e_ident[EI_VERSION]);
	printf("OS/ABI:                            ");
	printf("%u\n", header->e_ident[EI_OSABI]);
	printf("ABI Version:                       ");
	printf("%u\n", header->e_ident[EI_ABIVERSION]);
	printf("Type:                              ");
	printf("%u\n", header->e_type);
	printf("Entry point address:               ");
	printf("%#010x\n", (unsigned int)header->e_entry);
}

/**
 * close_file - closes the ELF file
 *
 * @elf_file: the file descriptor for the ELF file
 *
 * Return: nothing
*/
void close_file(int elf_file)
{
	if (close(elf_file) == -1)
	{
		dprintf(STDERR_FILENO,
			"Error: Can't close head_file %d\n", elf_file);
		exit(98);
	}
}

/**
 * main - Entry point
 *
 * Description: elf_header_parser file
 *
 * @argc: argument counter
 * @argv: argument vector
 *
 * Return: Always 0 (success)
*/
int main(int __attribute__((__unused__)) argc, char *argv[])
{
	if (argc != 2)
	{
		fprintf(stderr, "Usage: elf_header elf_filename\n");
			exit(98);
	}

	int head_file = open(argv[1], O_RDONLY);

	if (head_file < 0)
	{
		perror("open");
			exit(98);
	}

	Elf64_Ehdr header;

	check_elf(head_file, &header);
	display_elf_header(&header);

	close_file(head_file);
	return (0);
}
