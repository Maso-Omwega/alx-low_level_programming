#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Prints out the alphabet
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char alphabets[26] = "abcdefghijklmnopqrstuvwxyz";
	int l:

	for (l = 0; l < 26; l++)
	{
		putchar(alphabets[l]);
	}
	putchar('\n');
	return (0);
}
