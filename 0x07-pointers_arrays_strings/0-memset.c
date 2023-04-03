#include "main.h"
/**
 *  * _memset - fills memory constant byte
 *   *
 *    * @p: pointer to memory area to fill
 *     * @m: the number of bytes to fill
 *      * @c: constant byte
 *       *
 *        * Return: pointer to memory area @p
 *         */

char *_memset(char *p, char c, unsigned int m)
{
		unsigned int g;

			for (g = 0; g < m; g++)
					{
								p[g] = c;
									}

				return (p);
}
