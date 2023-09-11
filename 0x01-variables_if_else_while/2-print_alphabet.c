#include <stdio.h>

/**
 * main - Prints the alphabet.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
char alp[26] = "abcdefghijklmnopqrstuvwxyz";
int m;

for (m = 0; m < 26; m++)
{
putchar(alp[m]);
}
putchar('\n');
return (0);
}

