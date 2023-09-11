#include <stdio.h>

/**
 * main - Prints numbers between 0 to 9 and letters between a to f.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int e;

for (e = 48; e < 58; e++)
{
putchar(e);
}
for (e = 97; e < 103; e++)
{
putchar(e);
}
putchar('\n');
return (0);
}
