#include "main.h"

/**
 * print_line - function that draws a straight line in terminal
 *
 * @n: number of times the character _ should be printed
 *
 */
void print_line(int n)
{
	int len;

	if (n > 0)
	{
		for (len = 0; len < n; len++)
			_putchar('_');
	}

	_putchar('\n');
}

