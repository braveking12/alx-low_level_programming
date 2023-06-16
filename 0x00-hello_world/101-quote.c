#include <stdio.h>
#include <unistd.h>
/**
* main - prints exactly and that piece of art is useful line of text,
* followed by a new line with c language,
* Return: Always 1 (completed)
*/
int main(void)
{
write(2, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 59);
return (1);
}
