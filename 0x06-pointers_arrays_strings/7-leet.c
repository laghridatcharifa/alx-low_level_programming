#include "main.h"
/**
 * leet - Encodes a string to 1337.
 * @str: The string to be encoded.
 * Return: A pointer to the encoded string.
 */
char *leet(char *str)
{
int i = 0, indx2;
char leet[8] = {'O', 'L', '?', 'E', 'A', '?', '?', 'T'};
while (str[i])
{
for (indx2 = 0; indx2 <= 7; indx2++)
{
if (str[i] == leet[indx2] || str[i] - 32 == leet[indx2])
str[i] = indx2 + '0';
}
i++;
}

return (str);
}
