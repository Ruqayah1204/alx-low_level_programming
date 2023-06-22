#include "main.h"
/**
 * print_numbers - writes the character c to stdout
 *
 * @void: void
 * On error, -1 is returned, and errno is set appropriately.
 */
void print_numbers(void)
{
	char c;

	for (c = '0'; c <= '9'; c++)
	{
	_putchar(c);
	}
	_putchar('\n');
}
