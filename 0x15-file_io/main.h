#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>
#include <fcntl.h>
#include <errno.h>

#define BUFFER_SIZE 1024

int _putchar(char ch);
int _strlen(char *str);
ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);
int append_text_to_file(const char *filename, char *text_content);
int copy_content(char *file_from, char *dest_file);
void print_usage_err(char *program_name);
void print_read_err(char *filename);
void print_write_err(char *filename);
void print_close_err(int fd_value);
#endif
