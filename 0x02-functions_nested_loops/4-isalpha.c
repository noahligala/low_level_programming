#include "main.h"
/**
 * _isalpha - function to check whether a character is an alphabet
 *
 * @c: character being checked and then printed
 *
 * Return: 1 if alphaet otherwise 0
 */
int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
		return (1);
	else
		return (0);
}
