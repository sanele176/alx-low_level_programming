#include "main.h"
/**
 *  * _memcpy - Copies memory area
 *   *
 *    * @dest: copy the memory to
 *     * @n: number of bytes
 *      * @src: memory area to copy from
 *       *
 *        * Return: pointer to @dest
 *         */

char *_memcpy(char *dest, char *src, unsigned int n)
{
		unsigned int g;

			for (g = 0; g < n; g++)
						dest[g] = src[g];

				return (dest);
}
