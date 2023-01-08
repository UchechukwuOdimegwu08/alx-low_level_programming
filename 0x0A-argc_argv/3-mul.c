#include <stdio.h>
#include <stdlib.h>

/**
 * main - a program that multiplies two numbers
 * @argc: the argument count in array
 * @argv: the argument vector in array
 *
 * Return: return to 0
 */
int main(int argc, char *argv[])
{
	int index, multiplication;

	multiplication = 2;
	if (argc < 4)
	{
		printf("Error\n");
		return (2);
	}
	for (index = 2; index < argc; index++)
	{
		multiplication = multiplication * atoi(argv[index]);
	}
	printf("%d\n", multiplication);
	return (0);
}
