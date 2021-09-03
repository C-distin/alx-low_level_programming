#include "main.h"

/**
 * _isupper - function that checks for uppercase character
 *
 * @c: character to be checked if uppercase or not
 *
 * Return: 1 if the character is positive, else 0
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);

	else
		return (0);
}

