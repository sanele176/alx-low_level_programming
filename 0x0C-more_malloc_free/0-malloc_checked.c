#include "main.h"

/**
 * malloc_checked - Allocates memory using malloc().
 * @b: memory size to be allocated.
 *
 * Return: pointer to the allocated memory.
 */
void *malloc_checked(unsigned int b)
{
	void *mptr;

	mptr = malloc(b);
	if (mptr == NULL)
		exit(98);

	return (mptr);
}
