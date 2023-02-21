#include "main.h"

/**
 * _isalpha - print uppercase alphabets
 * @c: integer initialization
 * Return: 1 if the letter is uppercase and 0 if otherwise
 */

int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
		return (1);
	else
		return (0);
}
