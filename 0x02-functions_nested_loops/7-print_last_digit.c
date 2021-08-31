#include "main.h"

/**
 * print_last_digit - prints the last digit of n
 *
 * @n: number that will have last digit printed
 *
 * Return: last digit n.
 */

int print_last_digit(int n)
{
	int last_digit = n % 10;

	if (n < 0)
	{
		last_digit *= -1;
	}

	_putchar(last_digit + '0');

	return(last_digit);
}

