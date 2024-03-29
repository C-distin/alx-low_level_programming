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
int main(int __attribute__((__unused__)) argc, char *argv[])
{
	char key[7], *codex;
	int len = strlen(argv[1]), i, temp;

	codex = "A-CHRDw87lNS0E9B2TibgpnMVys5XzvtOGJcYLU+4mjW6fxqZeF3Qa1rPhdKIouk";

	temp = (len ^ 59) & 63;
	key[0] = codex[temp];

	temp = 0;
	for (i = 0; i < len; i++)
		temp += argv[1][i];
	key[1] = codex[(temp ^ 79) & 63];

	temp = 1;
	for (i = 0; i < len; i++)
		temp *= argv[1][i];
	key[2] = codex[(temp ^ 85) & 63];

	temp = 0;
	for (i = 0; i < len; i++)
	{
		if (argv[1][i] > temp)
			temp = argv[1][i];
	}
	srand(temp ^ 14);
	key[3] = codex[rand() & 63];

	temp = 0;
	for (i = 0; i < len; i++)
		temp += (argv[1][i] * argv[1][i]);
	key[4] = codex[(temp ^ 239) & 63];

	for (i = 0; i < argv[1][0]; i++)
		temp = rand();
	key[5] = codex[(temp ^ 229) & 63];

	key[6] = '\0';
	printf("%s", key);
	return (0);
}
