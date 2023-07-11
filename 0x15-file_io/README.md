Project 0x15: C - File I/O

0-read_textfile.c: A function that takes in a filename and the number of letters to read and print from the file.
It returns the actual number of letters it could read and print.
If there is an error opening or reading the file, or if write fails or does not write the expected amount of bytes, it returns 0.

1-create_file.c: A function that takes two arguments: the filename of the file to create, and the content to write to the file.
It returns 1 on success and -1 on failure.

The function first checks if the filename is NULL, and returns -1 if it is. 
Then it opens the file using the open system call with the O_WRONLY, O_CREAT, and O_TRUNC flags.
These flags specify that the file should be opened for writing only, and that it should be created if it doesn't exist, or should be truncated
if it does exist.
The file's permissions are set to 0600, which means that it can be read and written by the owner of the file only.


2-append_text_to_file.c: A function takes in the filename and text_content as arguments.
It returns 1 on success and -1 on failure.
If the file does not exist, it will not create the file.
If filename is NULL, it will return -1.
If text_content is NULL, it will not add anything to the file.
