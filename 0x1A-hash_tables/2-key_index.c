#include "hash_tables.h"

/**
 * key_index - function to return the index of a key
 * @key: key to search for in the array
 * @size: size of the array to search
 *
 * Return: index of the key
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int hash_value = 0;
	unsigned long int i = 0;

	while (key[i] != '\0')
	{
		hash_value = (hash_value << 4) + key[i];
		if (hash_value & 0xF0000000)
		{
			hash_value = hash_value ^ (hash_value >> 24);
			hash_value = hash_value & 0x0FFFFFFF;
		}
		i++;
	}
	return (hash_value % size);
}
