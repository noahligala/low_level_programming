#include <stdlib.h> /*for malloc and free*/
#include "main.h"

/**
 * _calloc - Allocates memory for an array and initializes it to zero.
 * @nmemb: Number of elements in the array.
 * @size: Size of each element in bytes.
 *
 * Return: Pointer to the allocated memory (initialized to zero), or NULL on failure.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
    void *ptr;
    unsigned int i, total_size;

    /*Check for zero values*/
    if (nmemb == 0 || size == 0)
        return NULL;

    /* Calculate the total size required*/
    total_size = nmemb * size;

    /* Allocate memory using malloc*/
    ptr = malloc(total_size);

    /* Check for malloc failure*/
    if (ptr == NULL)
        return NULL;

    /* Initialize the allocated memory to zero*/
    for (i = 0; i < total_size; i++)
        *((char *)ptr + i) = 0;

    return ptr;
}
