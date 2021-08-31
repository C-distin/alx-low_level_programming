#include "holberton.h"

/**
 * print_alphabet - prints alphabet in lower case followed by a new line
 *
 * Return: Always 0.
 */
void print_alphabet(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
	{
		_putchar(letter);
	}

	_putchar('\n');
}

