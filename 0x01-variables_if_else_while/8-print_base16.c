#include <stdio.h>

/**
 * Description: main - prints all numbers of base 16 in lowercase,
 * followed by a new line.
 * Return: value 0 (Succesful).
 */
int main(void)
{
	int numbers;
	char alphabet;

	for (numbers = 0; numbers < 10; numbers++)
		putchar((numbers % 10) + '0');

	for (alphabet = 'a'; alphabet <= 'f'; alphabet++)
		putchar(alphabet);

	putchar('\n');

	return (0);
}
