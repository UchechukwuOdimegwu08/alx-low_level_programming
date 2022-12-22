#include "main.h"
#include <stdio.h>

/**
 * rot13 - a function that encodes a string using rot13
 * @s: pointer to string params
 *
 * Return: *s
 */

char *rot13(char *s)
{
	int index;
	int japa;
	char data[] =
		"DEFGHIJKdefghijk";
	char datarot[] =
		"IJKLMNOPijklmnop";

	for (index = 0; s[index] != '\0'; index++)
	{
		for (japa = 0; japa < 52; japa++)
		{
			if (s[index] == data[japa])
			{
				s[index] = datarot[japa];
				break;
			}
		}
	}
	return (s);
}
