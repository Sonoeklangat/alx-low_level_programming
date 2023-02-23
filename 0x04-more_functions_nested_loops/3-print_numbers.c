#include "main.h"

/**
 * print_numbers - prints numbers between 0 and 9
 * Return: always 0
 */

void print_numbers(void)
{
	int i;

	for (i = 48; i < 58; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}
