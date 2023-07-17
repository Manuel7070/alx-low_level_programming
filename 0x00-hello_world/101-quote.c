#include <stdio.h>
#include <unistd.h>
/**
 * main - C programme which print a line to std error
 *
 * Return: 1 for succuess
 */
int main(void)
{
	fputs("and that piece of art is useful\n", stdout);
	fputs("  - Dora Korpar, 2015-10-19\n", stdout);
	return (1);
}
