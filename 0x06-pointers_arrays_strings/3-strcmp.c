#include "main.h"

/**
 * _strcmp - compares two strings
 * @s1: function parameter
 * @s2: function parameter
 * Return: If str1 < str2, the negative difference
 * of the first unmatched characters
 * if str1 == str2, 0
 * if str1 > str2, the positive difference of the first unmatched characters
 *
 */
int _strcmp(char *s1, char *s2)
{
	while (*s1 && *s2 && *s1 == *s2)
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}
