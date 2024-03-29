#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>
#include <fcntl.h>
#include <errno.h>
#include <elf.h>

#define BUFFER_SIZE 1024

int _putchar(char ch);
int _strlen(char *str);
ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);
int append_text_to_file(const char *filename, char *text_content);
void print_err_msg(char *filename, int err_code);
int handle_errors(ssize_t b_read, int fd_f, int fd_t, char *argv[]);

void print_error(char *msg);
void print_elf_header(Elf64_Ehdr *header);

#endif
