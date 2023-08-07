#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>
#include <elf.h>
#include <errno.h>
#include <string.h>
#include <stdlib.h>

void print_error(const char *message);
void print_elf_header_info(const Elf64_Ehdr *header);

void print_error(const char *message) {
    fprintf(stderr, "Error: %s\n", message);
    exit(98);
}

void print_elf_header_info(const Elf64_Ehdr *header) {
    printf("Magic: %02x %02x %02x %02x\n",
           header->e_ident[EI_MAG0], header->e_ident[EI_MAG1],
           header->e_ident[EI_MAG2], header->e_ident[EI_MAG3]);
    printf("Class: %s\n", (header->e_ident[EI_CLASS] == ELFCLASS64) ? "ELF64" : "ELF32");
    printf("Data: %s\n", (header->e_ident[EI_DATA] == ELFDATA2MSB) ? "2's complement, big-endian" : "2's complement, little-endian");
    printf("Version: %d\n", header->e_ident[EI_VERSION]);
    printf("OS/ABI: %s\n", (header->e_ident[EI_OSABI] == ELFOSABI_SYSV) ? "UNIX - System V" : "Other");
    printf("ABI Version: %d\n", header->e_ident[EI_ABIVERSION]);
    printf("Type: 0x%x\n", header->e_type);
    printf("Entry point address: 0x%lx\n", (unsigned long)header->e_entry);
}

int main(int argc, char *argv[]) {
    if (argc != 2) {
        print_error("Usage: elf_header elf_filename");
    }

    int fd = open(argv[1], O_RDONLY);
    if (fd == -1) {
        print_error(strerror(errno));
    }

    Elf64_Ehdr header;
    if (read(fd, &header, sizeof(header)) != sizeof(header)) {
        close(fd);
        print_error("Error reading ELF header");
    }

    if (!(header.e_ident[EI_MAG0] == ELFMAG0 && header.e_ident[EI_MAG1] == ELFMAG1 &&
          header.e_ident[EI_MAG2] == ELFMAG2 && header.e_ident[EI_MAG3] == ELFMAG3)) {
        close(fd);
        print_error("Not an ELF file");
    }

    print_elf_header_info(&header);

    close(fd);
    return 0;
}

