Project: 0x08(recursions)

0-puts-recursion.c: A function that prints a string followed by a newline recursively.
This function takes a pointer s to the string to be printed. It uses recursion to print
each character of the string one by one, until it reaches the null terminator character '\0'.
It prints a newline character '\n' using putchar() when the null terminator is encountered and returns.

1-print-rev-recursion.c: A function that prints string in reveserse recursively.
The _print_rev-recursion function takes a character pointer s as an argument.
It then checks if the current character is the null character, which marks the end of the string.
If it is, the function returns. Otherwise, it makes a recursive call with the next character in the string.
Once all the characters have been printed in reverse order, the function returns

2-strlen-recursion.c: A function that prints the length of a string recursively.
The _strlen_recursion function takes a character pointer s as an argument.
Checks if the current character is the null character, which marks the end of the string, then the returns 0.
Otherwise, it makes a recursive call with the next character in the string and adds 1 to the result.
Once all the characters have been counted, the function returns the final length.

3-factorial - returns the factorial of a given number recursively.
The factorial function takes an integer n as an argument.
It first checks if n is less than 0, then returns -1 to indicate an error.
If n is equal to 0, the function returns 1, since 0! = 1.
Otherwise, the function makes a recursive call to factorial with n - 1 until the base case is reached.
the accumulated factorial value is then returned.
