#include "main.h"

/**
 * _strcat - function to append the src string to dest
 * @src: function parameter
 * @dest: function parameter
 * Return: dest on success
 */
char *_strcat(char *dest, char *src)
{
	int len = 0, i;

	while (dest[len])
	{
		len++;
	}
	for (i = 0; src[i] != 0; i++)
	{
		dest[len] = src[i];
		len++;
	}
	dest[len] = '\0';
	return (dest);
}
