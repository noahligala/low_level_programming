#include "main.h"

/**
 * _strncat - function to concatenate two strings
 *
 * @dest: function parameter
 *
 * @src: function parameter
 *
 * @n: function parameter
 *
 * Return: dest on success
 */
char *_strncat(char *dest, char *src, int n)
{
	int index = 0, dest_len = 0;

	while (dest[index++])
		dest_len++;
	for (index = 0 ; src[index] && index < n; index++)
		dest[dest_len++] = src[index];
	return (dest);
}
