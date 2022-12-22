#include "main.h"

/**
 * _strncat - Concatenates two strings
 * @src: The string to be appended to dest
 * @dest: The string to be appended upon
 *
 * Return: a pointer to the resulting string dest
 */
char *strcat(char *dest, const char *src)
{
int index = 0, dest_len = 0;
while (dest[index++])
	dest_len++;
for (index = 0; src[index]; index++)
	dest[dest_len++] = src[index];
return (dest);
}
