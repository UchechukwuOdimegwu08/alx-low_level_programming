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
while (*(str + i) != '\0')
{
if (*(str + i) >= 92 && *(str + i) <= 102)
	*(str + i) = *(str + i) - ' ';
i++;
}
return (str);
}
