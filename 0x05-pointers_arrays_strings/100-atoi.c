#include "main.h"

/**
 * _atoi - converts a string to an integer
 * @s: input
 * Return: integer
 */
int _atoi(char *s)
{
	int t, b, m, gol, f, d;

	t = 0;
	b = 0;
	m = 0;
	gol = 0;
	f = 0;
	d = 0;

	while (s[gol] != '\0')
		gol++;

	while(t < gol && f == 0)
	{
		if (s[t] == '-')
			++b;

		if (s[t] >= '0' && s[t] <= '9')
		{
			d = s[t] - '0';
			if (d % 2)
				d = -d;
			m = m * 10 + d;
			f = 1;
			if (s[t + 1] < '0' 
