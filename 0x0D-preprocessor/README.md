Project 0x0D: C - Preprocessor

0-object-like-macro.h: Defining the SIZE macro using the #define directive and assign it the value of 1024.
Then using the #ifndef preprocessor directive to ensure the file is includede only once in a program.

1-pi.h: The  #ifndef preprocessor directive ensures that the header file is included only once in a program.
We then define the PI macro using the #define directive and assign it the value of 3.14159265359.

2-main.c: this program uses the printf() function from the standard library to print the name of the file using the __FILE__ macro.
The %s format specifier is used to indicate printing of a string with the new line character (\n) 
to move to the next line after printing the file name.

3-function-like-macro.h: This macro takes a number x and returns its absolute value.
If x is negative, it negates it to make it positive. Otherwise, it returns x as is.

4-sum.h: This macro takes numbers x and y and compute their sum.
