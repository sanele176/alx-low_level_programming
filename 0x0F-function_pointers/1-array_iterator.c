#include "function_pointers.h"

/**
 * array_iterator - apply a function on each element of an array
 * @array: array
 * @size: array size
 * @action: apply on items in array
 * Return: 0
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t g;

	if (action == NULL || array == NULL)
		return;

	for (g = 0; g < size; g++)
		action(array[g]);
}
