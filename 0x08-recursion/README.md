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

3-factorial.c - returns the factorial of a given number recursively.
The factorial function takes an integer n as an argument.
It first checks if n is less than 0, then returns -1 to indicate an error.
If n is equal to 0, the function returns 1, since 0! = 1.
Otherwise, the function makes a recursive call to factorial with n - 1 until the base case is reached.
the accumulated factorial value is then returned.

4-pow-recursion.c: A function that calculates the value of x power y recursively.
This function recursively calculates the power of a number x raised to the yth power.
It follows the formula x^y, where, x and y are integers representing the base and exponent respectively.
If y is negative, the function returns -1 to indicate an error.
If y is zero, the function returns 1.
Otherwise, the function returns the result of x raised to the power of y.

5-sqrt-recursion.c: A function that recursively calculates and returns the natural square root of a number.
The function takes an integer n as input and returns its natural square root.
If n is negative, the function returns -1. 
If n does not have a natural square root, it returns the largest integer whose square is less than or equal to n.

The sqrt-helper-func.c: Is a recursive helper function that takes three arguments: 
the integer iNum, the starting point iStart, and the ending point iEnd. 
It uses binary search to find the square root of iNum by recursively
until it finds the square root or determines that it doesn't exist.

6-is-prime-number.c: The function takes an integer as input and checks if it is a prime number.
If the input integer is a prime number, the function returns 1. Otherwise, it returns 0.

is-prime-helper-func: takes two integers as input, iNum as a number and iCounter as counter,
and returns whether the number is prime or not. 1 if the input integer is a prime number otherwise, 0

100-is-palindrome.c: The function takes a given  string s including an empty string and checke
if is a palindrome using recursion. Returns 1 if it is a palindrome and 0 otherwise.

The print-strlen function is a helper function that calculates
the length of a given string using recursion.

The palindrome-checker function is the main recursive function that checks if a string is a palindrome.
It takes in the string str, the starting index iStrlen, and the ending index i.
The function continues to recurse until it reaches an empty string or a one-character string,
which are both considered palindromes.

101-wildcmp.c: A function that take two strings(s1, s2) as argument and compares if the are identical.
Returns 1 if the strings can be considered identical, otherwise return 0.
s2 can contain the special character *.
