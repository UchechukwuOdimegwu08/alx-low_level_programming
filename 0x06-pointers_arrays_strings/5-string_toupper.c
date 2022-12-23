#include "main.h"

/**
 * string_toupper - All lowercases letters changed to uppercase
 * @n: pointer
 * Return: n
 */

char *string_toupper(char *n)
{
int i = 0;
while (n[1] != '\0')
{
if (n[1] >= 'a' && n[1] <= 'z')
	n[i] = n[1] - 32;
i++;
}
return (n);
}
