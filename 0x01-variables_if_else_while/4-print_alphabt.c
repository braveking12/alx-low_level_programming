#include <stdio.h>

/**
 * Description: main -  prints out the alphabet in lowercase,
 * followed by a new line.
 * prints all the letters except q and e
 * Return: value 0 (Succesful).
 */
int main(void)
{
	char alphabet;

	for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
	{
		if (alphabet != 'e' && alphabet != 'q')
			putchar(alphabet);
	}

	putchar('\n');

	return (0);
}
