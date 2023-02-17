#include <stdio.h>

/**
*main - Entry point
*Return : always 0 (success)
*/

int main(void)

{
	char alp;

	for (alp = 'a'; alp <= 'z'; alp++)
	{
		if (alp == 'e' || alp == 'q')
			continue;
		putchar (alp);
	}

	putchar ('\n');

		return (0);
}
