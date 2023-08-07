#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>
#include <elf.h>

void print_osabi(unsigned char osabi)
{
	switch (osabi)
	{

	case ELFOSABI_NONE:
		printf("<unknown: %x>\n", osabi);
		break;
/* Handle other cases if needed */
		default:
		printf("Unknown OS/ABI: %x\n", osabi);
		break;
	}
}

void print_type(Elf64_Half type)
{
	switch (type)
	{
case ET_NONE:
	printf("<unknown: %x>\n", type);
	break;	
/* Handle other cases if needed */
	default:
	printf("Unknown type: %x\n", type);
	break;
	}
}

int main(int argc, char *argv[])
{

	int fd;
	Elf64_Ehdr elf_header;

	if (argc < 2)
	{

	dprintf(STDERR_FILENO, "Error: No file specified\n");
	return (1);
	}
fd = open(argv[1], O_RDONLY);

	if (fd == -1)
	{

		dprintf(STDERR_FILENO, "Error: No such file: %s.\n", argv[1]);
		return (1);
	}
/* Read the ELF header*/
	ssize_t bytes_read = read(fd, &elf_header, sizeof(Elf64_Ehdr));

	if (bytes_read != sizeof(Elf64_Ehdr))
	{
		dprintf(STDERR_FILENO, "Error: Failed to read ELF header\n");
	close(fd);
	return (1);
	}
/* Print information from the ELF header*/
	printf("ELF Type: ");
	print_type(elf_header.e_type);
	printf("Entry point address: 0x%lx\n", (long)elf_header.e_entry);
	printf("OS/ABI: ");
	print_osabi(elf_header.e_ident[EI_OSABI]);

	close(fd);
	return (0);
}
