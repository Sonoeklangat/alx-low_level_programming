#include <stdio.h>

/**
*main - Entry pont
*Return: always 0 (success)
*/

int main(void)

{
	char alp;

	for (alp = 'a'; alp <= 'z'; alp++)
		putchar (alp);

	for (alp = 'A'; alp <= 'Z'; alp++)
		putchar (alp);

	return (0);
}
