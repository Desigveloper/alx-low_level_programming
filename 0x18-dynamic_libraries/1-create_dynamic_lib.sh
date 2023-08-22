#!/bin/bash

# Compiles all .c files into object files
gcc -Wall -Werror -Wextra -pedantic -std=c99 -c -fPIC *.c

# Create the dynamic library called liball.so
gcc -shared *.o -o liball.so

# Clean up object files
rm *.o
