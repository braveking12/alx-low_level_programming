#include <stdio.h>

/**
 * Description: main -  prints out the lowercase alphabet in reverse,
 * followed by a new line.
 * Return: value 0 (Succesful).
 */
int main(void)
{
	char alphabet;

	for (alphabet = 'z'; alphabet >= 'a'; alphabet--)
		putchar(alphabet);

	putchar('\n');

	return (0);
}
