/**
  * _memcpy - copies number(n) bytes from memory area pointed by src to dest
  * @src: source of string
  * @n: number of bytes
  * @dest: destination of bytes
  *
  * Return: pointer to dest
  */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *cPtrDest = dest;
	char *cPtrSrc = src;

	while (n--)
		*cPtrDest++ = *cPtrSrc++;

	return (dest);
}
