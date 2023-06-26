#include "main.h"

/**
 * _puts - prints a string, followed by a new line, to stdout.
 * @str: string to be printed.
 * using while loop
 */

void _puts(char *str)
{
	while (*str)
		_putchar(*str++);

	_putchar('\n');
}
