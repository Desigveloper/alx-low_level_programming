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
char* print_err_msg(char *msg);
void copy_content(int fd_from, int fd_to, ssize_t bytes_read, char *buffer);
void close_fd (int fd_from,  int fd_to, char *err_msg);

#endif
