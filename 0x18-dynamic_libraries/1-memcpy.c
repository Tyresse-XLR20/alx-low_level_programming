#include "main.h"

/**
 * *_memcpy - Copies the memory area
 * @dest: The destination of the memory area
 * @src: The memory area to copy from
 * @n: the number of bytes to copy
 *
 * Return: pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}

	return (dest);
}
