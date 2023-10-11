#include <stddef.h>
#include "function_pointers.h"

/**
 * array_iterator - executes function given as parameter
 * @array: elements on which function is executed
 * @size: size in bytes
 * @action: function to execute
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array == NULL || action == NULL || size == 0)
		return;
	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
