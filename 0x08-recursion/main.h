#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>

void _putchar(char c);
void _puts_recursion(char *s);
void _print_rev_recursion(char *s);
int _strlen_recursion(char *s);
int factorial(int n);
int _pow_recursion(int x, int y);
int _sqrt_recursion(int n);
int sqrt_helper_func(int iNum, int iRoot);
int is_prime_number(int n);
int is_prime_helper_func(int iNum, int iCounter);
int is_palindrome(char *s);
int palindrome_helper_func(char *s, int cLen, int i);
int print_str_len(char *str);
#endif /*MAIN_H*/
