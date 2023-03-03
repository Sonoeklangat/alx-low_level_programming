#include "main.h"

/**
 * _strncpy - copy part of a string
 * @dest: destination string
 * @src: source string
 * @n: number of characters to be copied
 * Return: dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0 ; i < n ; i++)
		dest[i] = src[i];
	return (dest);
}
