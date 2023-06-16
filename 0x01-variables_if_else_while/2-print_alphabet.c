#include <stdio.h>

/**
 * Description:main -  prints out the alphabet in lowercase,
 * followed by a new line.
 * Return: value 0 (Succesful).
 */
int main(void)
{
	char alphabet;

	for (alphabet = 'a'; alphabet <= 'z'; alphabet++)

	putchar(alphabet);

	putchar('\n');

	return (0);
}
