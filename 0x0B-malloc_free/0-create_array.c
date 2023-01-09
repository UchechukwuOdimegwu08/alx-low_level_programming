#include "holberton.h"
#include <stdlib.h>
/**
 * create_array - A function that creates an array of chars,
 * and initializes it with a specific char.
 * @size: The size of the array
 * @c: A character to initialized the array
 * Return: Apointer to the array or NULL if it fails
 */
char *create_array(unsigned int size, char c)
{
	char *str;
	unsigned int i;
str = malloc(sizeof(char) * size);
if (size == 0 || str == NULL)
	return (NULL);
for (i = 0; i < size; i++)
	str[i] = c;
return (str);
}
