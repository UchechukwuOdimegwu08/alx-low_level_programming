#include "main.h"

/**
 * _strncat - Concatenates two strings
 * @src: The string to be appended to dest
 * @dest: The string to be appended upon
 * Return: a pointer to the resulting string dest
 */

char *_strcat(char *dest, char *src)
{
int a = -1, i;

for (i = 0; dest[i] != '\0';)
	i++;
do {
	a++;
	dest[i] = src[a];
	i++;
} while (src[a] != '\0');

return (dest);
}
