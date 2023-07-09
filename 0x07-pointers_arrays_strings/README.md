Project: 0x07(Pointers, Arrays & Strings)

0-memset: A function that fills memory with a constant byte.
This function takes a pointer s to the memory area to be filled, 
a constant byte b, and an unsigned integer n specifying the number of bytes to fill.
It then uses a for loop to iterate over the first n bytes of the memory area pointed to by s,
setting each byte to the value of b. Finally, it returns a pointer to the memory area s.

1-memcpy.c: A function that copies memory area.
The _memcpy() function copies n bytes from memory area src to memory area dest
Returns a pointer to dest

2-strchr.c: A function that takes two parameters: a pointer to a string s and a character c.
Iterates through the string using a loop, comparing each character to the target character c.
If it finds a match, it returns a pointer to that character.
If it reaches the end of the string without finding a match, it returns NULL.

3-strspn.c: A function that takes two arguments: a string s to search and a string accept containing the characters to match.
It iterates over each character in s and returns an unsigned integer representing the number of bytes in the initial segment of s
which consist only of bytes from accept.

4-strpbrk.c: A function that takes two arguments: a string s to search and a string accept containing the bytes to match.
It iterates over each character of s and returns a pointer to the byte in s that matches one of the bytes in accept,
or NULL if no such byte is found.

5-strstr.c: function takes two arguments: a string haystack to search and a substring needle to search for.
It iterates over each character in haystack and returns a pointer to the beginning of the located substring,
or NULL if the substring is not found.

