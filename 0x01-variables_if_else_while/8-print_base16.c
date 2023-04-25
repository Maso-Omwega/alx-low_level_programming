#include <stdio.h>

/**
 * main - prints all the base 16 numbers in lowercase,
 * followed by a new line
 * Return: Always 0 (Success)
 */
int main(void)
{
	int k;
	char h;

	for (k = 48; k < 58; k++)
	{
		putchar(k);
	}
	for (h = 'a'; h <= 'f'; h++)
	{
		putchar(h);
	}
	putchar('\n');
	return (0);
}
