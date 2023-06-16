#include <stdio.h>
/**
 * main  a program that prints the size of variables types with c language
 * Return: 0 (completed)
 */
int main(void)
{
	char c;
	int i;
	long t;
	long long tt;
	float f;

	printf("Size of a char: %lu byte(s)\n", (unsigned long)sizeof(c));
	printf("Size of an int: %lu byte(s)\n", (unsigned long)sizeof(i));
	printf("Size of a long int: %lu byte(s)\n", (unsigned long)sizeof(t));
	printf("Size of a long long int: %lu byte(s)\n", (unsigned long)sizeof(tt));
	printf("Size of a float: %lu byte(s)\n", (unsigned long)sizeof(f));

	return (0);
}
