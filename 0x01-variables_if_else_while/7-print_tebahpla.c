#include <stdio.h>

/**
 * main - Print alphabet from z
 *  to a in reverse
 *
 *  Return: Always 0
 */
int main(void)
{
	int b;

	for (b = 'z'; b >= 'a'; b--)
		putchar(b);

	putchar('\n');

	return (0);
}

