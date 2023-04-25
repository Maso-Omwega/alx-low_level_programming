#include <stdio.h>

/**
 * main - prints all single digit base 10 numbers starting from 0,
 * followed by a new line, using putchar
 * Return: Always 0 (Success)
 */
int main(void)
{
	int j;

	for (j = 48; j < 58; j++)
	{
		putchar(j);
	}
	putchar('\n');
	return (0);
}
