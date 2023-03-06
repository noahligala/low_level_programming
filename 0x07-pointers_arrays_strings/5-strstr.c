#include "main.h"
#include <stdio.h>

/**
 * _strstr - function to locate the beginning of a substring
 * @haystack: function parameter
 * @needle: function parameter
 * Return: a character haystack;
 */
char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		char *one = haystack;
		char *two = needle;

		while (*one == *two && *two != '\0')
		{
			one++;
			two++;
		}
		if (*two == '\0')
			return (haystack);
	}
	return (NULL);
}
