#include <stdio.h>

/**
 * main - Program that print a line using printf
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
char c;
char d;
c = 'a';
while (c <= 'z')
{
if ((c != 'q' && c != 'e') && c <= 'z')
putchar(c);
c++;
}
putchar('\n');
	return (0);
}
