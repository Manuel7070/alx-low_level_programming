#include <stdio.h>

/**
 * main - Entry point to the programme
 *
 * Return: 0 (success)
 */

int main(void)
{
	char i;

	for (i = 'z' ; i >= 'a' ; i--)
		putchar(i);
	putchar('\n');
	return (0);
}
