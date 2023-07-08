Project 0x14: C - Bit manipulation


0-binary_to_uint.c: A function takes a pointer to a string of binary characters, and converts it to an unsigned int.
If the input string is NULL or contains any characters other than '0' or '1', it returns 0.

1-print_binary.c: A function takes an unsigned long int as input, and prints its binary representation to standard output.
It does not use arrays, malloc, or the % or / operators.
The function first finds the most significant bit in the input number by shifting a mask left until it is greater than the input number.


2-get_bit.c: A function that takes an unsigned long int and an index as input,
and returns the value of the bit at the specified index. It returns -1 if the index is out of range.
The function first checks if the index is within range by comparing it to the size of an unsigned long int in bits.


3-set_bit.c: A function that takes a pointer to an unsigned long int and an index as input,
and sets the value of the bit at the specified index to 1. It returns 1 if it worked, or -1 if an error occurred.


4-clear_bit.c: A function that takes a pointer to an unsigned long int and an index as input,
and sets the value of the bit at the specified index to 0. It returns 1 if it worked, or -1 if an error occurred.


5-flip_bits.c: A function that takes two unsigned long ints as input, and returns the number of bits that need to be flipped 
in order to get from one number to the other. It does not use the % or / operators.
The function first computes the XOR difference between the two input numbers,
which will have a 1 in each bit position where the two numbers differ.


100-get_endianness.c: A function that checks the endianness of the machine by creating an integer variable num with the value 1.
It then creates a pointer ptr to the address of num. Since a pointer to a char is one byte, it points to the first byte of num.
If the value of that byte is 1, then the machine is little endian, because the least significant byte comes first.
Otherwise, the machine is big endian, because the most significant byte comes first.
