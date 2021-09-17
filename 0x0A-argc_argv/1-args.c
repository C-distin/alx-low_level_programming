#include <stdio.h>
#include <stdlib.h>

/**
 * main - program that prints the number of arguments passed into it
 *
 * @argc: the number of command line arguments
 * @argv: the array containing the program command line arguments
 *
 * Return: Always 0
 */

int main(int argc, char *argv[])
{
	(void) argv;
	printf("%d\n", argc);

	return (0);
}
