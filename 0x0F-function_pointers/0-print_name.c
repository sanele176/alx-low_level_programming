#include "function_pointers.h"

/**
 * print_name - calls function to prints a name
 * @name: source  name to print
 * @f: function to prints name
 * Return: 0
 */
void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
		f(name);
}
