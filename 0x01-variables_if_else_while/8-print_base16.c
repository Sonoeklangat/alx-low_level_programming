#include <stdio.h>

/**
*main - Entry point
*Return: Always 0 (success)
*/

int main(void)

{
	int numb;
	char c;
	{
		for (numb = 0; numb <= 9; numb++)
			putchar (numb + '0');
		for (c = 'a'; c <= 'f'; c++)
			putchar (c);
	}
		putchar ('\n');
		return (0);
}
