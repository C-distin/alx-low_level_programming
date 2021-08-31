#include "main.h"

/**
 * print_alphabet_x10 - prints alphabet lowercase 10 times
 *
 */

void print_alphabet_x10(void)
{
	int line = 0;
	char letter;

	while (line <= 10)
	{
		for (letter = 'a'; letter <= 'z'; letter++)
		{
			_putchar(letter);
		}

		_putchar('\n');
		line++;
	}
}

