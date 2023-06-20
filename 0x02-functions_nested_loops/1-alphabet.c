#include "main.h"

/**
 * print_alphabet - prints the alphabet, in lowercase,
 *  followed by a new line.
 *  Return: value 0 (done)
 */

void print_alphabet(void)
{
	char  print_alphabet;

	for (print_alphabet = 'a';  print_alphabet <= 'z';  print_alphabet++)
		_putchar(print_alphabet);

	_putchar('\n');
}

