#include "main.h"

/**
 * _abs - computes the absolute of an interger
 *
 * @n: integer to be processed
 *
 * Return: Absolute value
 */

int _abs(int n)
{
	if (n > 0)
	{
		n = n * 1;
	}

	else if (n == 0)
	{
		n = 0;
	}

	else
	{
		n = n * -1;
	}

	return (n);
}

