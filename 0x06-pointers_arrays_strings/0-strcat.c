#include "main.h"

/**
 * _strncat - Concatenates two strings
 * @src: The string to be appended to dest
 * @dest: The string to be appended upon
 *
 * Return: void
 */
char *_strcat(char *dest, char *src)
{
int index = 0, dest_len = 0;
while (dest[index] != '\0')
{
	index++;
}
while (src[dest_len] != '\0')
{
	dest[index] = src[dest_len];
	index++;
	dest_len++;
}
dest[index] = '\0';
return (dest);
}
