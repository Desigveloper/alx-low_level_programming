#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H

#include <stdlib.h>
#include <stdio.h>
#include <stdarg.h> /* for va_list, va_start,and va_end macros */
#include <unistd.h>

/* STRUCTURE OR STRUCT TAG DEFINITION */
typedef struct print_type
{
	char type; /* formart specifier char */
	void (*print)(va_list); /* pointer to the func printing corresp arg */
} inst_of_print_type;

/* FUNCTION PROTOTYPES */
int _putchar(char ch);
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);
void print_char(va_list args);
void print_int(va_list args);
void print_float(va_list args);
void print_string(va_list args);
#endif
