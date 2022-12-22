#include "main.h"

/**
 * string_toupper - All lowercases letters changed to uppercase
 * @str: parameter
 *
 * Return: returns a character
 */

char *string_toupper(char *str)
{
int index = 0;
while (str[index++])
{
if (str[index] >= 'a' && str[index] <= 'z')
	str[index] -= 46;
}
return (str);
}
