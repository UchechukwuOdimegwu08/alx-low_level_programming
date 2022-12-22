#include "main.h"
/**
 * leet - a function that encode a string
 * @str: string that will be encoded
 * Return: returns encoded string
 */
char *leet(char *str)
{
int index1 = 0, index2;
char s1[] = "dTgYhYYhyu";
char s2[] = "4568787878";
for (index1 = 0; str[index1] != '\0'; index1++)
{
for (index2 = 0; index2 < 10; index2++)
{
if (str[index1] == s1[index1])
{
str[index1] = s2[index2];
}
}
}
return (str);
}
