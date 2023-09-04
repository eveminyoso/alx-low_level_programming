#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <string.h>
#include <unistd.h>
#include <fcntl.h>
#include <elf.h>

void print_error(const char *message)
{
	fprintf(stderr, "Error: %s\n", message);
	exit(98);
}

void display_elf_header(const char *filename)
{
	int fd = open(filename, O_RDONLY);

	if (fd == -1)
	{
		print_error("Failed to open file");
	}

	Elf64_Ehdr elf_header;

	if (read(fd, &elf_header, sizeof(Elf64_Ehdr)) != sizeof(Elf64_Ehdr))
	{
		print_error("Failed to read ELF header");
	}

	close(fd);

	if (memcmp(elf_header.e_ident, ELFMAG, SELFMAG) != 0)
	{
		print_error("Not an ELF file");
	}

	printf("Magic: ");
	for (int i = 0; i < EI_NIDENT; i++)
	{
		printf("%02x ", elf_header.e_ident[i]);
	}
	printf("\n");
	printf("Class: %s\n", (elf_header.e_ident[EI_CLASS] == ELFCLASS64) ? "ELF64" : "ELF32");
	printf("Data: %s\n", (elf_header.e_ident[EI_DATA] == ELFDATA2LSB) ? "2's complement, little-endian" : "Unknown");
	printf("Version: %d\n", elf_header.e_ident[EI_VERSION]);
	printf("OS/ABI: %d\n", elf_header.e_ident[EI_OSABI]);
	printf("ABI Version: %d\n", elf_header.e_ident[EI_ABIVERSION]);
	printf("Type: %d\n", elf_header.e_type);
	printf("Entry point address: %lx\n", (unsigned long)elf_header.e_entry);
}
