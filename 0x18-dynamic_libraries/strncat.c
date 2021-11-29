#include "main.h"

/**
 * _strncat - concatenate two strings
 * @dest: destination
 * @src: source
 * 
 * Return: pointer to dest
 */
char *_strncat(char *dest, char *src)
{
	int i = 0, j = 0;

	while (dest[i] != '\0')
		i++;
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}
