#include "main.h"

/**
 * _islower - checks whether a character is lowercase or not
 *
 * @c: character to be checked
 *
 * Return: 1 if lowercase and 0 if otherwise
 *
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}

	else
	{
		return (0);
	}
}

