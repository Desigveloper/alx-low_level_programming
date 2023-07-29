/**
 * main - Reads header of a file and prints all information about it
 * @argc: number of command line arguments
 * @argv: array of command lin arguments
 * Return: 0 if success
 */

#include "main.h"

int main(int argc, char **argv) {
    if (argc != 2) {
        print_error("Usage: elf_header elf_file");
    }

    int fd = open(argv[1], O_RDONLY);
    if (fd == -1) {
        print_error("Error opening file");
    }

    Elf64_Ehdr header;
    if (read(fd, &header, sizeof(header)) != sizeof(header)) {
        print_error("Error reading ELF header");
    }

    if (memcmp(header.e_ident, ELFMAG, SELFMAG) != 0) {
        print_error("Not an ELF file");
    }

    print_elf_header(&header);

    close(fd);

    return 0;
}


/**
 * print_error - Prints an error message to stderr and exit with code 98
 * @msg: Pointer to the message passed
 * Return: none
 */

void print_error(char *msg) {
    // Print the error message to stderr
    fprintf(stderr, "%s\n", msg);

    // Exit the program with code 98
    exit(98);
}

/**
 * print_elf_header - prints all the information about an ELF header to stdout
 * @header: arg paased
 * Return: none
 */

void print_elf_header(Elf64_Ehdr *header) {
    printf("ELF Header:\n");
    printf("  Magic:   ");
    for (int i = 0; i < EI_NIDENT; i++) {
        printf("%02x ", header->e_ident[i]);
    }
    printf("\n");
    printf("  Class:                             %s\n", header->e_ident[EI_CLASS] == ELFCLASS32 ? "ELF32" : "ELF64");
    printf("  Data:                              %s\n", header->e_ident[EI_DATA] == ELFDATA2LSB ? "2's complement, little endian" : "2's complement, big endian");
    printf("  Version:                           %d (current)\n", header->e_ident[EI_VERSION]);
    printf("  OS/ABI:                            ");
    switch (header->e_ident[EI_OSABI]) {
        case ELFOSABI_SYSV:
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
        case ELFOSABI_AIX:
            printf("UNIX - AIX\n");
            break;
        case ELFOSABI_FREEBSD:
            printf("UNIX - FreeBSD\n");
            break;
        case ELFOSABI_OPENBSD:
            printf("UNIX - OpenBSD\n");
            break;
        default:
            printf("<unknown: %x>\n", header->e_ident[EI_OSABI]);
            break;
    }
    printf("  Type:                              %s\n", header->e_type == ET_REL ? "REL (Relocatable file)" : "not a relocatable file");
    printf("  Entry point address:               0x%lx\n", header->e_entry);
    printf("  Start of program headers:          %ld (bytes into file)\n", header->e_phoff);
    printf("  Start of section headers:          %ld (bytes into file)\n", header->e_shoff);
    printf("  Flags:                             0x%x\n", header->e_flags);
    printf("  Size of this header:               %d (bytes)\n", header->e_ehsize);
    printf("  Size of program headers:           %d (bytes)\n", header->e_phentsize);
    printf("  Number of program headers:         %d\n", header->e_phnum);
    printf("  Size of section headers:           %d (bytes)\n", header->e_shentsize);
    printf("  Number of section headers:         %d\n", header->e_shnum);
    printf("  Section header string table index: %d\n", header->e_shstrndx);
}
