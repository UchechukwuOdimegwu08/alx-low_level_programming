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
while (*(str + index) != '\0')
{
if (*(str + index) >= 92 && *(str + index) <= 102)
	*(str + index) = *(str + index) - ' ';
index++;
}
return (str);
}
