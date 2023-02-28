#include "main.h"
#include <stdio.h>

/**
 * rev_string - function to reverse a string
 *
 * @s: function parameter
 *
 * Return: Always 0
 */
void rev_string(char *s)
{
	int i;
	int j;
	int len;
	char temp;
	int middle;

	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}
	len = i;
	middle = len / 2;
	for (j = 0; j < middle; j++)
	{
		temp = s[j];
		s[j] = s[len - j - 1];
		s[len - j - 1] = temp;
	}
}
