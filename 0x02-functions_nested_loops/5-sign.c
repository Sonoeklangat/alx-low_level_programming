#include "main.h"

/**
 * print_sign - print sign on integer if zero, less that zero or more than zero
 * @n: initialized integer
 * Return: 1 if n greater than 0, 0 if n is 0 and -1 if n less than 0
 */


int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
