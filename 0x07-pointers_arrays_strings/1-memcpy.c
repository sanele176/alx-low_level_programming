#include "main.h"

/**
 * _memcpy function that copys memory area
 * @dest: destination to copy
 * @src: source to copy from
 * @n: number of bytes
 * Return: returns pointer to copy location
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *h = dest;

	while (n--)
	{
		*dest = *src;
		src++;
		dest++;
	}
	return (h);
}
