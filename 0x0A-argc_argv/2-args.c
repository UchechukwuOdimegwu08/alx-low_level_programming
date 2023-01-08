#include <stdio.h>
#include <stdlib.h>

/**
 * main - a program that prints all arguments it receives.
 * @argc: number of arguments count
 * @argv: number of arguments array
 *
 * Return: retun to 0
 */
int main(int argc, char *argv[])
{
	int n;

	for (n = 0; n < argc; n++)
	{
		printf("%s\n", argv[n]);
	}
	return (0);
}
