#include "main.h"
/**
 * leet - a function that encode a string
 * @n: input value
 * Return: returns n
 */
char *leet(char *n)
{
int i, j;
char s1[] = "dTgYhYYhyu";
char s2[] = "4568787878";
for (i = 0; n[i] != '\0'; i++)
{
for (j = 0; j < 10; i++)
{
if (n[i] == s1[j])
{
n[i] = s2[j];
}
}
}
return (n);
}
