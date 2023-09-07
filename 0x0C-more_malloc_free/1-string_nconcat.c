#include <stdlib.h>
#include "main.h"

/**
 * string_nconcat - Concatenates two strings up to n bytes from s2.
 * @s1: The first string.
 * @s2: The second string.
 * @n: The maximum number of bytes from s2 to concatenate.
 *
 * Return: A pointer to the newly allocated concatenated string, or NULL on failure.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n) {
    unsigned int len1 = 0, len2 = 0;
    unsigned int i, j;
    char *result;

    if (s1 == NULL)
        s1 = "";
    if (s2 == NULL)
        s2 = "";

    // Calculate the length of s1 and s2
    while (s1[len1] != '\0')
        len1++;
    while (s2[len2] != '\0')
        len2++;

    // Adjust n if it's greater than or equal to the length of s2
    if (n >= len2)
        n = len2;

    // Allocate memory for the result string
    result = (char *)malloc((len1 + n + 1) * sizeof(char));
    if (result == NULL)
        return NULL;

    // Copy s1 to the result string
    for (i = 0; i < len1; i++)
        result[i] = s1[i];

    // Concatenate up to n bytes of s2 to the result string
    for (j = 0; j < n; j++)
        result[i + j] = s2[j];

    // Add the null terminator
    result[i + j] = '\0';

    return result;
}
