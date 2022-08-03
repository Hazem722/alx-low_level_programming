#include "funtion_pointers.h"

/**
 * array_iterator - function that executes a function
 * given as a parameter on each element of an array
 * @array: array of integers
 * @size: size of array
 * @action: function pointer
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (size != NULL && action != NULL)
	{
		for (i = 0; i < size; i++)
			action(array[i]);
	}
}
