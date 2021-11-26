#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * main - generate key for crackme5 depending on the username
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: 0 on success, 1 on failure
 */
int main(int argc, char *argv[])
{
	char *username;
	char *key;
	int i;

	if (argc != 2)
	{
		printf("Usage: %s username\n", argv[0]);
		return (1);
	}
	username = argv[1];
	key = malloc(sizeof(char) * strlen(username) + 1);
	if (key == NULL)
	{
		printf("Error: malloc failed\n");
		return (1);
	}
	for (i = 0; username[i] != '\0'; i++)
	{
		key[i] = username[i] + i;
	}
	key[i] = '\0';
	printf("%s\n", key);
	free(key);
	return (0);
}
