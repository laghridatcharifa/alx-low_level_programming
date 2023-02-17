#include <stdio.h>

/**
 * main - Program that print a line using printf
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
char c;
c = 'z';
while (c >= 'a')
{
putchar(c);
c--;
}
putchar('\n');
	return (0);
}
