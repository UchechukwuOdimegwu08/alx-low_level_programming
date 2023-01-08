#include <stdio.h>
#include <stdlib.h>

/**
 * main - the minimum number of coins to make change for an amount of money.
 * @args: the parameter entry
 * @argv: the array of arguments
 *
 * Return: 0
 */
int main(int args, char *argv[])
{
	int c, j, result, coins[] = {25, 10, 5, 2, 1};

	if (args != 2)
	{
		printf("Error\n");
		return (1);
	}
	c = atoi(argv[1]);
	result = 0;

	if (c < 0)
	{
		printf("0\n");
		return (0);
	}
	for (j = 0; j < 5 && c >= 0; j++)
	{
		while (c >= coins[j])
		{
			result++;
			c -= coins[j];
		}
	}

printf("%d\n", result);
return (0);
}
