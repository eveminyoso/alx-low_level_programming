#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <elf.h>
#include "main.h"
/**
 *main - displays the information contained in the ELF header
 *@argc: number of arguments
 *@argv: array of arguments
 *Return: 0 Success
 */

int main(int argc, char *argv[])
{
	FILE *fp;
	Elf64_Ehdr elf_header;

	if (argc != 2)
	{
		fprintf(stderr, "Usage: %s elf_filename\n", argv[0]);
		exit(1);
	}

	fp = fopen(argv[1], "rb");

	if (fp == NULL)
	{
		fprintf(stderr, "Could not open file '%s'\n", argv[1]);
		exit(1);
	}

	if (lseek(fileno(fp), 0, SEEK_SET) != 0)
	{
		fprintf(stderr, "Could not seek to start of file\n");
		exit(1);
	}

	if (read(fileno(fp), &elf_header, sizeof(elf_header)) != sizeof(elf_header))
	{
		fprintf(stderr, "Could not read ELF header\n");
		exit(1);
	}

	printf("Magic: 0x%08x\n", elf_header.e_ident[EI_MAG2]);
	printf("Class: %d\n", elf_header.e_ident[EI_CLASS]);
	printf("Data: %d\n", elf_header.e_ident[EI_DATA]);
	printf("Version: %d\n", elf_header.e_ident[EI_VERSION]);
	printf("OS/ABI: %d\n", elf_header.e_ident[EI_OSABI]);
	printf("ABI Version: %d\n", elf_header.e_ident[EI_ABIVERSION]);
	printf("Type: %d\n", elf_header.e_type);
	printf("Entry point address: 0x%lx\n", elf_header.e_entry);

	fclose(fp);

	return (0);
}
