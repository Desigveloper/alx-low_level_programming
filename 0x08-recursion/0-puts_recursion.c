/**
 * _puts_recursion - prints string recursively
 * @s: param pointer to the string to be printed
 *
 * Return: none if success 
 */

#include "main.h"

void _puts_recursion(char *s) {
    if (*s == '\0') {
        _putchar('\n');
        return;
    }
    _putchar(*s);
    _puts_recursion(s + 1);
}

