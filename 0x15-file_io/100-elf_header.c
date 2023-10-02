#include <elf.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

void check_elf(unsigned char *r_ident);
void print_magic(unsigned char *r_ident);
void print_class(unsigned char *r_ident);
void print_data(unsigned char *r_ident);
void print_version(unsigned char *r_ident);
void print_abi(unsigned char *r_ident);
void print_osabi(unsigned char *r_ident);
void print_type(unsigned int r_type, unsigned char *r_ident);
void print_entry(unsigned long int r_entry, unsigned char *r_ident);
void close_elf(int elf);

/**
 * check_elf - Checks if a file is an ELF file
 * @r_ident: A pointer to an array
 */
void check_elf(unsigned char *r_ident)
{
	int ind;

	for (ind = 0; ind < 4; ind++)
	{
		if (r_ident[ind] != 127 &&
		    r_ident[ind] != 'E' &&
		    r_ident[ind] != 'L' &&
		    r_ident[ind] != 'F')
		{
			dprintf(STDERR_FILENO, "Error: Not an ELF file\n");
			exit(98);
		}
	}
}

/**
 * print_magic - Prints the magic numbers
 * @r_ident: A pointer to an array
 */
void print_magic(unsigned char *r_ident)
{
	int ind;

	printf("  Magic:   ");

	for (ind = 0; ind < EI_NIDENT; ind++)
	{
		printf("%02x", r_ident[ind]);

		if (ind == EI_NIDENT - 1)
			printf("\n");
		else
			printf(" ");
	}
}

/**
 * print_class - Prints the class
 * @r_ident: A pointer to an array
 */
void print_class(unsigned char *r_ident)
{
	printf("  Class:                             ");

	switch (r_ident[EI_CLASS])
	{
	case ELFCLASSNONE:
		printf("none\n");
		break;
	case ELFCLASS32:
		printf("ELF32\n");
		break;
	case ELFCLASS64:
		printf("ELF64\n");
		break;
	default:
		printf("<unknown: %x>\n", r_ident[EI_CLASS]);
	}
}

/**
 * print_data - Prints the data
 * @r_ident: A pointer to an array
 */
void print_data(unsigned char *r_ident)
{
	printf("  Data:                              ");

	switch (r_ident[EI_DATA])
	{
	case ELFDATANONE:
		printf("none\n");
		break;
	case ELFDATA2LSB:
		printf("2's complement, little endian\n");
		break;
	case ELFDATA2MSB:
		printf("2's complement, big endian\n");
		break;
	default:
		printf("<unknown: %x>\n", r_ident[EI_CLASS]);
	}
}

/**
 * print_version - Prints the version
 * @r_ident: A pointer to an array
 */
void print_version(unsigned char *r_ident)
{
	printf("  Version:                           %d",
	       r_ident[EI_VERSION]);

	switch (r_ident[EI_VERSION])
	{
	case EV_CURRENT:
		printf(" (current)\n");
		break;
	default:
		printf("\n");
		break;
	}
}

/**
 * print_osabi - Prints the OS/ABI
 * @r_ident: A pointer to an array
 */
void print_osabi(unsigned char *r_ident)
{
	printf("  OS/ABI:                            ");

	switch (r_ident[EI_OSABI])
	{
	case ELFOSABI_NONE:
		printf("UNIX - System V\n");
		break;
	case ELFOSABI_HPUX:
		printf("UNIX - HP-UX\n");
		break;
	case ELFOSABI_NETBSD:
		printf("UNIX - NetBSD\n");
		break;
	case ELFOSABI_LINUX:
		printf("UNIX - Linux\n");
		break;
	case ELFOSABI_SOLARIS:
		printf("UNIX - Solaris\n");
		break;
	case ELFOSABI_IRIX:
		printf("UNIX - IRIX\n");
		break;
	case ELFOSABI_FREEBSD:
		printf("UNIX - FreeBSD\n");
		break;
	case ELFOSABI_TRU64:
		printf("UNIX - TRU64\n");
		break;
	case ELFOSABI_ARM:
		printf("ARM\n");
		break;
	case ELFOSABI_STANDALONE:
		printf("Standalone App\n");
		break;
	default:
		printf("<unknown: %x>\n", r_ident[EI_OSABI]);
	}
}

/**
 * print_abi - Prints the ABI version
 * @r_ident: A pointer to an array
 */
void print_abi(unsigned char *r_ident)
{
	printf("  ABI Version:                       %d\n",
	       r_ident[EI_ABIVERSION]);
}

/**
 * print_type - Prints the type
 * @r_type: The ELF type.
 * @r_ident: A pointer to an array
 */
void print_type(unsigned int r_type, unsigned char *r_ident)
{
	if (r_ident[EI_DATA] == ELFDATA2MSB)
		r_type >>= 8;

	printf("  Type:                              ");

	switch (r_type)
	{
	case ET_NONE:
		printf("NONE (None)\n");
		break;
	case ET_REL:
		printf("REL (Relocatable file)\n");
		break;
	case ET_EXEC:
		printf("EXEC (Executable file)\n");
		break;
	case ET_DYN:
		printf("DYN (Shared object file)\n");
		break;
	case ET_CORE:
		printf("CORE (Core file)\n");
		break;
	default:
		printf("<unknown: %x>\n", r_type);
	}
}

/**
 * print_entry - Prints the entry point
 * @r_entry: The address
 * @r_ident: A pointer to an array
 */
void print_entry(unsigned long int r_entry, unsigned char *r_ident)
{
	printf("  Entry point address:               ");

	if (r_ident[EI_DATA] == ELFDATA2MSB)
	{
		r_entry = ((r_entry << 8) & 0xFF00FF00) |
			  ((r_entry >> 8) & 0xFF00FF);
		r_entry = (r_entry << 16) | (r_entry >> 16);
	}

	if (r_ident[EI_CLASS] == ELFCLASS32)
		printf("%#x\n", (unsigned int)r_entry);

	else
		printf("%#lx\n", r_entry);
}

/**
 * close_elf - Closes an ELF file
 * @elf: The file descriptor
 */
void close_elf(int elf)
{
	if (close(elf) == -1)
	{
		dprintf(STDERR_FILENO,
			"Error: Can't close fd %d\n", elf);
		exit(98);
	}
}

/**
 * main - Displays the information
 * @argc: The number of arguments
 * @argv: An array of pointers to the arguments
 * Return: 0
 */
int main(int __attribute__((__unused__)) argc, char *argv[])
{
	Elf64_Ehdr *head;
	int op, re;

	op = open(argv[1], O_RDONLY);
	if (op == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read file %s\n", argv[1]);
		exit(98);
	}
	head = malloc(sizeof(Elf64_Ehdr));
	if (head == NULL)
	{
		close_elf(op);
		dprintf(STDERR_FILENO, "Error: Can't read file %s\n", argv[1]);
		exit(98);
	}
	re = read(op, head, sizeof(Elf64_Ehdr));
	if (re == -1)
	{
		free(head);
		close_elf(op);
		dprintf(STDERR_FILENO, "Error: `%s`: No such file\n", argv[1]);
		exit(98);
	}

	check_elf(head->e_ident);
	printf("ELF Header:\n");
	print_magic(head->e_ident);
	print_class(head->e_ident);
	print_data(head->e_ident);
	print_version(head->e_ident);
	print_osabi(head->e_ident);
	print_abi(head->e_ident);
	print_type(head->e_type, head->e_ident);
	print_entry(head->e_entry, head->e_ident);

	free(head);
	close_elf(op);
	return (0);
}
