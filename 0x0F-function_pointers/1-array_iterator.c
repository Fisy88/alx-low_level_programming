#include "function_pointers.h"

/**
 *  array_iterator - prints each array element
 *  @array: array
 *  @size: number of element to print
 *  @action: pointer to print
 *  return: void
 **/

void array_iterator(int *array, size_t size, void (action)(int))
{
	if (array == NULL || action == NULL)
		return;

	while (size-- > 0)

	{
		action(*array);
		array++;
	}

}
