#include "main.h"
/**
 *  * _memcpy - Copies memory 
 *   *
 *    * @d: where to copy the memory
 *     * @m: number of bytes
 *      * @s: memory area to copy from
 *       *
 *        * Return: a pointer to @d
 *         */

char *_memcpy(char *d, char *s, unsigned int m)
{
		unsigned int n;

			for (n = 0; n < m; n++)
						d[n] = s[n];

				return (d);
}
