#include <stdio.h>

/**
 * main - prints  alphabet in lowercase,
 * followed by a new line, except q and e
 * Return: Aways 0 (Success)
 */
int main(void)
{
	char h = 'a';

	while (h <= 'z')
	{
		if (h != 'e' && h != 'q')
		{
			putchar(h);
		}
		h++;
	}
	putchar('\n');
	return (0);
}

