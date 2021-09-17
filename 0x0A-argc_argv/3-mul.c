#include <stdio.h>
#include <stdlib.h>

/**
 * main - program that multiplies two numbers
 *
 * @argc: the number of command line arguments
 * @argv: the array containing the program command line arguments
 *
 * Return: 1 if argc is not equal to 3 else 0
 */

int main(int argc, char *argv[])
{
	int mul, arg1, arg2;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	arg1 = atoi(argv[1]);
	arg2 = atoi(argv[2]);
	mul = arg1 * arg2;

	printf("%d\n", mul);
	return (0);
}

