#include "function_pointers.h"

/**
 * array_iterator - execute a function pointer on each element of an array
 * @array: array of integers
 * @size: size of array
 * @action: function pointer
 */

void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;

	f(name);
}

