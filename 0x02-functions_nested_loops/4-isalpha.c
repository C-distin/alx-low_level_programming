#include "main.h"

/**
 * _isalpha - prints uppercase alphabets
 *
 * @c: represents character r
 *
 * Return: Always 0.
 */

int _isalpha(int c)
{
	if ((c >= 'A' && c <= 'Z')  || (c >= 'a' && c <= 'z'))
	{
		return (1);
	}

	else
		return (0);
}

